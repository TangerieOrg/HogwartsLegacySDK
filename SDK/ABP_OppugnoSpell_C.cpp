#include "AActor.hpp"
#include "ABP_OppugnoSpell_C.hpp"
#include "AOppugnoSpellTool.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
void ABP_OppugnoSpell_C::OnCastSpell(AActor* Target, FVector& Location, FVector& MuzzleLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Oppugno/BP_OppugnoSpell.BP_OppugnoSpell_C.OnCastSpell"));
    struct Params_OnCastSpell {
        AActor* Target; // 0x0
        FVector Location; // 0x8
        FVector MuzzleLocation; // 0x14
    }; // Size: 0x20
    Params_OnCastSpell params{};
    params.Target = (AActor*)Target;
    params.Location = (FVector)Location;
    params.MuzzleLocation = (FVector)MuzzleLocation;
    ProcessEvent(func, &params);
    Location = params.Location;
    MuzzleLocation = params.MuzzleLocation;
}
ABP_OppugnoSpell_C* ABP_OppugnoSpell_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Oppugno/BP_OppugnoSpell.BP_OppugnoSpell_C");
    return (ABP_OppugnoSpell_C*)res;
}
void ABP_OppugnoSpell_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Oppugno/BP_OppugnoSpell.BP_OppugnoSpell_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_OppugnoSpell_C::ExecuteUbergraph_BP_OppugnoSpell(int32_t EntryPoint, AActor* CallFunc_GetCharacterActor_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, AActor* K2Node_Event_Target, FVector K2Node_Event_Location, FVector K2Node_Event_MuzzleLocation, bool CallFunc_IsToolUsedByPlayer_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Oppugno/BP_OppugnoSpell.BP_OppugnoSpell_C.ExecuteUbergraph_BP_OppugnoSpell"));
    struct Params_ExecuteUbergraph_BP_OppugnoSpell {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* CallFunc_GetCharacterActor_ReturnValue; // 0x8
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x10
        char pad_1c[0x4];
        AActor* K2Node_Event_Target; // 0x20
        FVector K2Node_Event_Location; // 0x28
        FVector K2Node_Event_MuzzleLocation; // 0x34
        bool CallFunc_IsToolUsedByPlayer_ReturnValue; // 0x40
    }; // Size: 0x41
    Params_ExecuteUbergraph_BP_OppugnoSpell params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetCharacterActor_ReturnValue = (AActor*)CallFunc_GetCharacterActor_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.K2Node_Event_Target = (AActor*)K2Node_Event_Target;
    params.K2Node_Event_Location = (FVector)K2Node_Event_Location;
    params.K2Node_Event_MuzzleLocation = (FVector)K2Node_Event_MuzzleLocation;
    params.CallFunc_IsToolUsedByPlayer_ReturnValue = (bool)CallFunc_IsToolUsedByPlayer_ReturnValue;
    ProcessEvent(func, &params);
}
