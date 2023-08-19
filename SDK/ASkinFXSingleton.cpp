#include "AActor.hpp"
#include "ASkinFXSingleton.hpp"
#include "USimpleDataSet.hpp"
#include "USkinFXLibrary.hpp"
ASkinFXSingleton* ASkinFXSingleton::StaticClass() {
    static auto res = find_uobject("Class /Script/SkinFX.SkinFXSingleton");
    return (ASkinFXSingleton*)res;
}
