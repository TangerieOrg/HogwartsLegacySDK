#include "UArchitectGameInstance.hpp"
#include "UFunction.hpp"
#include "UGameInstance.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UObjectArchitectMonolithicAsset.hpp"
#include "UPreLoadArchitectMonolithicAsset.hpp"
UArchitectGameInstance* UArchitectGameInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.ArchitectGameInstance");
    return (UArchitectGameInstance*)res;
}
UArchitectGameInstance* UArchitectGameInstance::GetArchitectGameInstance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationArchitectRuntime.ArchitectGameInstance.GetArchitectGameInstance"));
    struct Params_GetArchitectGameInstance {
        UArchitectGameInstance* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetArchitectGameInstance params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UArchitectGameInstance*)params.ReturnValue;
}
