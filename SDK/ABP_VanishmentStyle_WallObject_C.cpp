#include "AActor.hpp"
#include "ABP_VanishmentStyle_WallObject_C.hpp"
#include "AVanishmentStyleBase.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
ABP_VanishmentStyle_WallObject_C* ABP_VanishmentStyle_WallObject_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Transformation/VanishmentStyles/BP_VanishmentStyle_WallObject.BP_VanishmentStyle_WallObject_C");
    return (ABP_VanishmentStyle_WallObject_C*)res;
}
void ABP_VanishmentStyle_WallObject_C::StartVanishment() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/VanishmentStyles/BP_VanishmentStyle_WallObject.BP_VanishmentStyle_WallObject_C.StartVanishment"));
    struct Params_StartVanishment {
    }; // Size: 0x0
    Params_StartVanishment params{};
    ProcessEvent(func, &params);
}
void ABP_VanishmentStyle_WallObject_C::ExecuteUbergraph_BP_VanishmentStyle_WallObject(int32_t EntryPoint, AActor* CallFunc_GetOwner_ReturnValue) {}
