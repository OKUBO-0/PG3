#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
int currentThread = 1; // 現在のスレッド番号

// スレッドで実行する関数
void PrintThread(int id) {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [id]() { return currentThread == id; }); // 現在のスレッド番号が一致するまで待つ
    std::cout << "thread " << id << std::endl; // スレッド番号を表示
    currentThread++; // 次のスレッド番号へ進む
    cv.notify_all(); // 次のスレッドを起こす
}

int main() {
    // スレッドを作成
    std::thread t1(PrintThread, 1);
    std::thread t2(PrintThread, 2);
    std::thread t3(PrintThread, 3);

    // スレッドの終了を待機
    t1.join();
    t2.join();
    t3.join();

    return 0;
}