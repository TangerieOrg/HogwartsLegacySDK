#include "ACharacter.hpp"
#include "AItemTool.hpp"
#include "ATool.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UItemToolRecord.hpp"
#include "UStaticMeshComponent.hpp"
ACharacter* AItemTool::GetCharacter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ItemTool.GetCharacter"));
    struct Params_GetCharacter {
        ACharacter* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCharacter params{};
    ProcessEvent(func, &params);
    return (ACharacter*)params.ReturnValue;
}
AItemTool* AItemTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ItemTool");
    return (AItemTool*)res;
}
UItemToolRecord* AItemTool::GetItemToolRecord() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ItemTool.GetItemToolRecord"));
    struct Params_GetItemToolRecord {
        UItemToolRecord* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetItemToolRecord params{};
    ProcessEvent(func, &params);
    return (UItemToolRecord*)params.ReturnValue;
}
