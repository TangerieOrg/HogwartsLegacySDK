#include "UFunction.hpp"
#include "USceneActionState_CharacterWalkBase.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_CharacterWalkBase* USceneActionState_CharacterWalkBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_CharacterWalkBase");
    return (USceneActionState_CharacterWalkBase*)res;
}
void USceneActionState_CharacterWalkBase::Arrived() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneActionState_CharacterWalkBase.Arrived"));
    struct Params_Arrived {
    }; // Size: 0x0
    Params_Arrived params{};
    ProcessEvent(func, &params);
}
