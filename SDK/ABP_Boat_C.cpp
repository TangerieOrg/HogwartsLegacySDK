#include "AActor.hpp"
#include "ABP_Boat_C.hpp"
#include "EEnvironment\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPropList.hpp"
#include "FRandomStream.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UCableComponent.hpp"
#include "UFunction.hpp"
#include "UObjectStateComponent.hpp"
#include "UPhysicsConstraintComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Boat_C* ABP_Boat_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Universal/BP_Boat.BP_Boat_C");
    return (ABP_Boat_C*)res;
}
void ABP_Boat_C::UserConstructionScript0(FPropList Props, int32_t CallFunc_RandomIntegerInRangeFromStream_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRandomStream CallFunc_MakeRandomStream_RandomStream, bool CallFunc_EqualEqual_ByteByte_ReturnValue) {}
void ABP_Boat_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Boat.BP_Boat_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Boat_C::ExecuteUbergraph_BP_Boat(int32_t EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Boat.BP_Boat_C.ExecuteUbergraph_BP_Boat"));
    struct Params_ExecuteUbergraph_BP_Boat {
        int32_t EntryPoint; // 0x0
        FVector CallFunc_K2_GetComponentLocation_ReturnValue; // 0x4
        bool CallFunc_Not_PreBool_ReturnValue; // 0x10
    }; // Size: 0x11
    Params_ExecuteUbergraph_BP_Boat params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_K2_GetComponentLocation_ReturnValue = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    ProcessEvent(func, &params);
}
