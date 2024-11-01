#include "animal.h"

// AnimalクラスのmakeSoundの実装
void Animal::makeSound() {
    printf("Some generic animal sound\n");
}

// DogクラスのmakeSoundの実装
void Dog::makeSound() {
    printf("ワン! ワン!\n");
}

// CatクラスのmakeSoundの実装
void Cat::makeSound() {
    printf("ニャン! ニャン!\n");
}