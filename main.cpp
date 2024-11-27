#include <iostream>
#include <list>

int main() {
	// 山手線駅名（1970年）
	std::list<const char*> yamanote_1970 = {
		"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno",
		"Uguisudani", "Nippori", "Tabata", "Komagome", "Sugamo",
		"Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba", "Shin-Okubo",
		"Shinjuku", "Yoyogi", "Harajuku", "Shibuya", "Ebisu",
		"Meguro", "Gotanda", "Osaki", "Shinagawa", "Tamachi",
		"Hamamatsucho", "Shimbashi", "Yurakucho",
	};

	// 表示関数
	auto printStations = [](const std::list<const char*>& stations, const char* year) {
		std::cout << year << " Station List:" << std::endl;
		for (const auto& station : stations) {
			std::cout << "- " << station << std::endl;
		}
		std::cout << std::endl;
		};

	// 1970年の駅リストを表示
	printStations(yamanote_1970, "1970");

	// 2019年の駅リストを作成（1971年に開業した西日暮里駅を追加）
	std::list<const char*> yamanote_2019 = yamanote_1970;
	auto it = yamanote_2019.begin();
	std::advance(it, 7); // 西日暮里を挿入する位置 (Nipporiの後)
	yamanote_2019.insert(it, "Nishi-Nippori");

	// 2019年の駅リストを表示
	printStations(yamanote_2019, "2019");

	// 2022年の駅リストを作成（2020年に開業した高輪ゲートウェイ駅を追加）
	std::list<const char*> yamanote_2022 = yamanote_2019;
	it = yamanote_2022.begin();
	std::advance(it, 25); // 高輪ゲートウェイを挿入する位置 (Shinagawaの後)
	yamanote_2022.insert(it, "Takanawa Gateway");

	// 2022年の駅リストを表示
	printStations(yamanote_2022, "2022");

	return 0;
}