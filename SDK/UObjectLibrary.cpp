#include "UClass.hpp"
#include "UObject.hpp"
#include "UObjectLibrary.hpp"
UObjectLibrary* UObjectLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ObjectLibrary");
    return (UObjectLibrary*)res;
}
