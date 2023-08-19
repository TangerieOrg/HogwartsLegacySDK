#include "ACrimeScene.hpp"
#include "AWorldObject.hpp"
#include "UFunction.hpp"
ACrimeScene* ACrimeScene::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CrimeScene");
    return (ACrimeScene*)res;
}
void ACrimeScene::GlobalEnableCrime(bool i_Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CrimeScene.GlobalEnableCrime"));
    struct Params_GlobalEnableCrime {
        bool i_Enable; // 0x0
    }; // Size: 0x1
    Params_GlobalEnableCrime params{};
    params.i_Enable = (bool)i_Enable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
