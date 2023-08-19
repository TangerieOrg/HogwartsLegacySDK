#include "AActor.hpp"
#include "FCharacterBoneProjection.hpp"
#include "FCharacterBoneProjectionParams.hpp"
#include "FCharacterBoneProjectionResults.hpp"
#include "FCharacterBoneProjectionState.hpp"
#include "FSimpleBoneInfoCache.hpp"
#include "UCharacterBoneProjector.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UCharacterBoneProjector::Update(AActor* Owner, float dt) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterBoneProjector.Update"));
    struct Params_Update {
        AActor* Owner; // 0x0
        float dt; // 0x8
    }; // Size: 0xc
    Params_Update params{};
    params.Owner = (AActor*)Owner;
    params.dt = (float)dt;
    ProcessEvent(func, &params);
}
UCharacterBoneProjector* UCharacterBoneProjector::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CharacterBoneProjector");
    return (UCharacterBoneProjector*)res;
}
bool UCharacterBoneProjector::StatesInitialized() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterBoneProjector.StatesInitialized"));
    struct Params_StatesInitialized {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_StatesInitialized params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCharacterBoneProjector::InitializeState(AActor* Owner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CharacterBoneProjector.InitializeState"));
    struct Params_InitializeState {
        AActor* Owner; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_InitializeState params{};
    params.Owner = (AActor*)Owner;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
