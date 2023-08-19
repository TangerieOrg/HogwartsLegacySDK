#include "EUserDefinedStructureStatus.hpp"
#include "FGuid.hpp"
#include "UScriptStruct.hpp"
#include "UUserDefinedStruct.hpp"
UUserDefinedStruct* UUserDefinedStruct::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.UserDefinedStruct");
    return (UUserDefinedStruct*)res;
}
