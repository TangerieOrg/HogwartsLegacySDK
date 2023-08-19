#include "AActor.hpp"
#include "ABP_Torch_C.hpp"
#include "ALightClippingPlanes.hpp"
#include "ALightClippingVolume.hpp"
#include "ATorch.hpp"
#include "EDayNightEventDirection.hpp"
#include "EEnvironment\Type.hpp"
#include "ELightClippingProviderVolumeMode.hpp"
#include "EMoonPhaseName.hpp"
#include "ETimelineDirection\Type.hpp"
#include "E_LightFixture_Default\Type.hpp"
#include "E_TorchFireSize\Type.hpp"
#include "FDateTime.hpp"
#include "FDayNightSunAltitudeEvent.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPropList.hpp"
#include "FRandomStream.hpp"
#include "FSTR_LightFixtureDefaults.hpp"
#include "FSTR_Torch_LF.hpp"
#include "FSolarNormalizedTime.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UAkAudioEvent.hpp"
#include "UAkComponent.hpp"
#include "UAnimatedLightComponent.hpp"
#include "UArrestoMomentumComponent.hpp"
#include "UDayNightMasterComponent.hpp"
#include "UFunction.hpp"
#include "UIncendioComponent.hpp"
#include "ULightComponent.hpp"
#include "UNiagaraComponent.hpp"
#include "UObjectStateComponent.hpp"
#include "UPointLightComponent.hpp"
#include "USphereComponent.hpp"
#include "USpotLightComponent.hpp"
#include "UTimelineComponent.hpp"
void ABP_Torch_C::OnCompletelyCharred() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.OnCompletelyCharred"));
    struct Params_OnCompletelyCharred {
    }; // Size: 0x0
    Params_OnCompletelyCharred params{};
    ProcessEvent(func, &params);
}
ABP_Torch_C* ABP_Torch_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C");
    return (ABP_Torch_C*)res;
}
bool ABP_Torch_C::DecreaseFire(float decreaseAmount) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.DecreaseFire"));
    struct Params_DecreaseFire {
        float decreaseAmount; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_DecreaseFire params{};
    params.decreaseAmount = (float)decreaseAmount;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_Torch_C::DisallowArrestoMomentum() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.DisallowArrestoMomentum"));
    struct Params_DisallowArrestoMomentum {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowArrestoMomentum params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_Torch_C::IsPointOnFire(FVector Point, bool& OnFire) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.IsPointOnFire"));
    struct Params_IsPointOnFire {
        FVector Point; // 0x0
        bool OnFire; // 0xc
        bool ReturnValue; // 0xd
    }; // Size: 0xe
    Params_IsPointOnFire params{};
    params.Point = (FVector)Point;
    params.OnFire = (bool)OnFire;
    ProcessEvent(func, &params);
    OnFire = params.OnFire;
    return (bool)params.ReturnValue;
}
void ABP_Torch_C::ExtinguishLight0(bool bSlow) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.ExtinguishLight"));
    struct Params_ExtinguishLight {
        bool bSlow; // 0x0
    }; // Size: 0x1
    Params_ExtinguishLight params{};
    params.bSlow = (bool)bSlow;
    ProcessEvent(func, &params);
}
void ABP_Torch_C::OnFailedToLight() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.OnFailedToLight"));
    struct Params_OnFailedToLight {
    }; // Size: 0x0
    Params_OnFailedToLight params{};
    ProcessEvent(func, &params);
}
bool ABP_Torch_C::StartFreeze(AActor* Instigator, float Amount) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.StartFreeze"));
    struct Params_StartFreeze {
        AActor* Instigator; // 0x0
        float Amount; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_StartFreeze params{};
    params.Instigator = (AActor*)Instigator;
    params.Amount = (float)Amount;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_Torch_C::OnArrestoMomentumEnd(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.OnArrestoMomentumEnd"));
    struct Params_OnArrestoMomentumEnd {
        AActor* Instigator; // 0x0
        UArrestoMomentumComponent* ArrestoMomentumComponent; // 0x8
    }; // Size: 0x10
    Params_OnArrestoMomentumEnd params{};
    params.Instigator = (AActor*)Instigator;
    params.ArrestoMomentumComponent = (UArrestoMomentumComponent*)ArrestoMomentumComponent;
    ProcessEvent(func, &params);
}
void ABP_Torch_C::Timeline_1__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.Timeline_1__FinishedFunc"));
    struct Params_Timeline_1__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_1__FinishedFunc params{};
    ProcessEvent(func, &params);
}
bool ABP_Torch_C::IncreaseFire(float increaseAmount, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.IncreaseFire"));
    struct Params_IncreaseFire {
        float increaseAmount; // 0x0
        FVector Location; // 0x4
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IncreaseFire params{};
    params.increaseAmount = (float)increaseAmount;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_Torch_C::ConstructTorch0(FPropList Props, UPointLightComponent* Temp_object_Variable, bool Temp_bool_Variable, USpotLightComponent* Temp_object_Variable_1, uint8_t CallFunc_ModFunctionSetup_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, USpotLightComponent* K2Node_Select_Default, bool Temp_bool_Variable_1, UPointLightComponent* K2Node_Select_Default_1, bool CallFunc_TorchSetup_ReturnValue, int32_t CallFunc_PropSort_NewPropIndex, EEnvironment::Type CallFunc_PropSort_EnnvironmentOutput, int32_t CallFunc_PropSort_NewEnvInt) {}
bool ABP_Torch_C::IncreaseWetness(AActor* Instigator, float increaseAmount, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.IncreaseWetness"));
    struct Params_IncreaseWetness {
        AActor* Instigator; // 0x0
        float increaseAmount; // 0x8
        FVector Location; // 0xc
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_IncreaseWetness params{};
    params.Instigator = (AActor*)Instigator;
    params.increaseAmount = (float)increaseAmount;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_Torch_C::ExecuteUbergraph_BP_Torch(int32_t EntryPoint, bool CallFunc_ShouldStartLit_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, UDayNightMasterComponent* K2Node_Event_DayNightMaster_1, FName K2Node_Event_EventName_1, FSolarNormalizedTime K2Node_Event_NormalizedTime_1, FDateTime K2Node_Event_GameTime_1, EDayNightEventDirection K2Node_Event_MoonDirection, float K2Node_Event_MoonAltitudeDegrees, EMoonPhaseName K2Node_Event_Phase, bool K2Node_Event_bLate_1, AActor* K2Node_Event_Instigator_3, float K2Node_Event_decreaseAmount, AActor* K2Node_Event_Instigator_2, UIncendioComponent* K2Node_Event_IncendioComponent, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, FDayNightSunAltitudeEvent K2Node_MakeStruct_DayNightSunAltitudeEvent, int32_t Temp_int_Array_Index_Variable_1, bool K2Node_Event_bLerp, bool K2Node_Event_bSlow, FVector K2Node_Event_LightLoc, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FVector K2Node_Event_Location_1, float K2Node_Event_Amount, FVector K2Node_Event_Location, AActor* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue) {}
bool ABP_Torch_C::StartWetness(AActor* Instigator, float Amount, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.StartWetness"));
    struct Params_StartWetness {
        AActor* Instigator; // 0x0
        float Amount; // 0x8
        FVector Location; // 0xc
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_StartWetness params{};
    params.Instigator = (AActor*)Instigator;
    params.Amount = (float)Amount;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_Torch_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
bool ABP_Torch_C::StartFire(float Amount, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.StartFire"));
    struct Params_StartFire {
        float Amount; // 0x0
        FVector Location; // 0x4
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_StartFire params{};
    params.Amount = (float)Amount;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_Torch_C::ShouldStartLit0(float CallFunc_TorchGetNormalizedTime_NormalizedTime, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_ShouldStartLit_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.ShouldStartLit"));
    struct Params_ShouldStartLit {
        bool ReturnValue; // 0x0
        char pad_1[0x3];
        float CallFunc_TorchGetNormalizedTime_NormalizedTime; // 0x4
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x8
        bool CallFunc_Less_FloatFloat_ReturnValue; // 0x9
        bool CallFunc_ShouldStartLit_ReturnValue; // 0xa
        bool CallFunc_BooleanOR_ReturnValue; // 0xb
        bool CallFunc_BooleanOR_ReturnValue_1; // 0xc
        bool CallFunc_BooleanAND_ReturnValue; // 0xd
    }; // Size: 0xe
    Params_ShouldStartLit params{};
    params.CallFunc_TorchGetNormalizedTime_NormalizedTime = (float)CallFunc_TorchGetNormalizedTime_NormalizedTime;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_Less_FloatFloat_ReturnValue = (bool)CallFunc_Less_FloatFloat_ReturnValue;
    params.CallFunc_ShouldStartLit_ReturnValue = (bool)CallFunc_ShouldStartLit_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
E_LightFixture_Default::Type ABP_Torch_C::Auto_Easy_Set_Up(int32_t Temp_int_Variable, E_LightFixture_Default::Type Temp_byte_Variable, E_LightFixture_Default::Type Temp_byte_Variable_1, E_LightFixture_Default::Type Temp_byte_Variable_2, int32_t Temp_int_Variable_1, TArray<int32_t>& Temp_int_Variable_2, TArray<int32_t>& Temp_int_Variable_3, int32_t CallFunc_Conv_ByteToInt_ReturnValue, TArray<int32_t>& K2Node_Select_Default, int32_t CallFunc_Array_Get_Item, E_LightFixture_Default::Type K2Node_Select_Default_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.Auto Easy Set Up"));
    struct Params_Auto_Easy_Set_Up {
        E_LightFixture_Default::Type ReturnValue; // 0x0
        char pad_1[0x3];
        int32_t Temp_int_Variable; // 0x4
        E_LightFixture_Default::Type Temp_byte_Variable; // 0x8
        E_LightFixture_Default::Type Temp_byte_Variable_1; // 0x9
        E_LightFixture_Default::Type Temp_byte_Variable_2; // 0xa
        char pad_b[0x1];
        int32_t Temp_int_Variable_1; // 0xc
        TArray<int32_t> Temp_int_Variable_2; // 0x10
        TArray<int32_t> Temp_int_Variable_3; // 0x20
        int32_t CallFunc_Conv_ByteToInt_ReturnValue; // 0x30
        char pad_34[0x4];
        TArray<int32_t> K2Node_Select_Default; // 0x38
        int32_t CallFunc_Array_Get_Item; // 0x48
        E_LightFixture_Default::Type K2Node_Select_Default_1; // 0x4c
    }; // Size: 0x4d
    Params_Auto_Easy_Set_Up params{};
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.Temp_byte_Variable = (E_LightFixture_Default::Type)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (E_LightFixture_Default::Type)Temp_byte_Variable_1;
    params.Temp_byte_Variable_2 = (E_LightFixture_Default::Type)Temp_byte_Variable_2;
    params.Temp_int_Variable_1 = (int32_t)Temp_int_Variable_1;
    params.Temp_int_Variable_2 = (TArray<int32_t>)Temp_int_Variable_2;
    params.Temp_int_Variable_3 = (TArray<int32_t>)Temp_int_Variable_3;
    params.CallFunc_Conv_ByteToInt_ReturnValue = (int32_t)CallFunc_Conv_ByteToInt_ReturnValue;
    params.K2Node_Select_Default = (TArray<int32_t>)K2Node_Select_Default;
    params.CallFunc_Array_Get_Item = (int32_t)CallFunc_Array_Get_Item;
    params.K2Node_Select_Default_1 = (E_LightFixture_Default::Type)K2Node_Select_Default_1;
    ProcessEvent(func, &params);
    Temp_int_Variable_2 = params.Temp_int_Variable_2;
    Temp_int_Variable_3 = params.Temp_int_Variable_3;
    K2Node_Select_Default = params.K2Node_Select_Default;
    return (E_LightFixture_Default::Type)params.ReturnValue;
}
void ABP_Torch_C::Set_Point_Light_Texture(int32_t CallFunc_Conv_ByteToInt_ReturnValue, int32_t CallFunc_Multiply_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, FSTR_Torch_LF CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.Set Point Light Texture"));
    struct Params_Set_Point_Light_Texture {
        int32_t CallFunc_Conv_ByteToInt_ReturnValue; // 0x0
        int32_t CallFunc_Multiply_IntInt_ReturnValue; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        char pad_c[0x4];
        FString CallFunc_Conv_IntToString_ReturnValue; // 0x10
        FName CallFunc_Conv_StringToName_ReturnValue; // 0x20
        FSTR_Torch_LF CallFunc_GetDataTableRowFromName_OutRow; // 0x28
        bool CallFunc_GetDataTableRowFromName_ReturnValue; // 0x50
    }; // Size: 0x51
    Params_Set_Point_Light_Texture params{};
    params.CallFunc_Conv_ByteToInt_ReturnValue = (int32_t)CallFunc_Conv_ByteToInt_ReturnValue;
    params.CallFunc_Multiply_IntInt_ReturnValue = (int32_t)CallFunc_Multiply_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Conv_IntToString_ReturnValue = (FString)CallFunc_Conv_IntToString_ReturnValue;
    params.CallFunc_Conv_StringToName_ReturnValue = (FName)CallFunc_Conv_StringToName_ReturnValue;
    params.CallFunc_GetDataTableRowFromName_OutRow = (FSTR_Torch_LF)CallFunc_GetDataTableRowFromName_OutRow;
    params.CallFunc_GetDataTableRowFromName_ReturnValue = (bool)CallFunc_GetDataTableRowFromName_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_Torch_C::UserConstructionScript(FVector CallFunc_K2_GetActorLocation_ReturnValue, FRandomStream CallFunc_MakeRandomStream_RandomStream, FVector CallFunc_Add_VectorVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x0
        FRandomStream CallFunc_MakeRandomStream_RandomStream; // 0xc
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x14
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult; // 0x20
    }; // Size: 0xa8
    Params_UserConstructionScript params{};
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_MakeRandomStream_RandomStream = (FRandomStream)CallFunc_MakeRandomStream_RandomStream;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult;
    ProcessEvent(func, &params);
}
void ABP_Torch_C::Run_Construction(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_AssignLightClippingVolumeSource_bSuccess, bool CallFunc_AssignLightClippingVolumeSource_bSuccess_1, bool CallFunc_AssignLightClippingPlanesSource_bSuccess, bool CallFunc_AssignLightClippingPlanesSource_bSuccess_1, bool CallFunc_ConstructTorch_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.Run Construction"));
    struct Params_Run_Construction {
        bool CallFunc_IsValid_ReturnValue; // 0x0
        bool CallFunc_IsValid_ReturnValue_1; // 0x1
        bool CallFunc_AssignLightClippingVolumeSource_bSuccess; // 0x2
        bool CallFunc_AssignLightClippingVolumeSource_bSuccess_1; // 0x3
        bool CallFunc_AssignLightClippingPlanesSource_bSuccess; // 0x4
        bool CallFunc_AssignLightClippingPlanesSource_bSuccess_1; // 0x5
        bool CallFunc_ConstructTorch_ReturnValue; // 0x6
    }; // Size: 0x7
    Params_Run_Construction params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_AssignLightClippingVolumeSource_bSuccess = (bool)CallFunc_AssignLightClippingVolumeSource_bSuccess;
    params.CallFunc_AssignLightClippingVolumeSource_bSuccess_1 = (bool)CallFunc_AssignLightClippingVolumeSource_bSuccess_1;
    params.CallFunc_AssignLightClippingPlanesSource_bSuccess = (bool)CallFunc_AssignLightClippingPlanesSource_bSuccess;
    params.CallFunc_AssignLightClippingPlanesSource_bSuccess_1 = (bool)CallFunc_AssignLightClippingPlanesSource_bSuccess_1;
    params.CallFunc_ConstructTorch_ReturnValue = (bool)CallFunc_ConstructTorch_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_Torch_C::OL_Easy_Set_Up(E_LightFixture_Default::Type CallFunc_Auto_Easy_Set_Up_ReturnValue, bool Temp_bool_Variable, E_LightFixture_Default::Type K2Node_Select_Default, int32_t CallFunc_Conv_ByteToInt_ReturnValue, FName CallFunc_Array_Get_Item, FSTR_LightFixtureDefaults CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.OL Easy Set Up"));
    struct Params_OL_Easy_Set_Up {
        E_LightFixture_Default::Type CallFunc_Auto_Easy_Set_Up_ReturnValue; // 0x0
        bool Temp_bool_Variable; // 0x1
        E_LightFixture_Default::Type K2Node_Select_Default; // 0x2
        char pad_3[0x1];
        int32_t CallFunc_Conv_ByteToInt_ReturnValue; // 0x4
        FName CallFunc_Array_Get_Item; // 0x8
        FSTR_LightFixtureDefaults CallFunc_GetDataTableRowFromName_OutRow; // 0x10
        bool CallFunc_GetDataTableRowFromName_ReturnValue; // 0x34
    }; // Size: 0x35
    Params_OL_Easy_Set_Up params{};
    params.CallFunc_Auto_Easy_Set_Up_ReturnValue = (E_LightFixture_Default::Type)CallFunc_Auto_Easy_Set_Up_ReturnValue;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.K2Node_Select_Default = (E_LightFixture_Default::Type)K2Node_Select_Default;
    params.CallFunc_Conv_ByteToInt_ReturnValue = (int32_t)CallFunc_Conv_ByteToInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_GetDataTableRowFromName_OutRow = (FSTR_LightFixtureDefaults)CallFunc_GetDataTableRowFromName_OutRow;
    params.CallFunc_GetDataTableRowFromName_ReturnValue = (bool)CallFunc_GetDataTableRowFromName_ReturnValue;
    ProcessEvent(func, &params);
}
bool ABP_Torch_C::ParticleSetup0(E_TorchFireSize::Type TorchFireSize, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, float Temp_float_Variable_6, float Temp_float_Variable_7, float Temp_float_Variable_8, float Temp_float_Variable_9, float Temp_float_Variable_10, float Temp_float_Variable_11, bool Temp_bool_Variable, bool Temp_bool_Variable_1, UAkAudioEvent* Temp_object_Variable, bool Temp_bool_Variable_2, E_TorchFireSize::Type Temp_byte_Variable, UAkAudioEvent* Temp_object_Variable_1, UAkAudioEvent* Temp_object_Variable_2, UAkAudioEvent* Temp_object_Variable_3, UAkAudioEvent* Temp_object_Variable_4, UAkAudioEvent* Temp_object_Variable_5, UAkAudioEvent* Temp_object_Variable_6, UAkAudioEvent* Temp_object_Variable_7, UAkAudioEvent* Temp_object_Variable_8, UAkAudioEvent* Temp_object_Variable_9, UAkAudioEvent* Temp_object_Variable_10, UAkAudioEvent* Temp_object_Variable_11, UAkAudioEvent* Temp_object_Variable_12, UAkAudioEvent* Temp_object_Variable_13, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, UAkAudioEvent* K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, UAkAudioEvent* K2Node_Select_Default_1) {}
float ABP_Torch_C::PropagationSetup0(FVector CallFunc_GetComponentBounds_Origin, FVector CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, bool K2Node_SwitchInteger_CmpSuccess_2, bool K2Node_SwitchInteger_CmpSuccess_3, bool K2Node_SwitchInteger_CmpSuccess_4, bool K2Node_SwitchInteger_CmpSuccess_5) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.PropagationSetup"));
    struct Params_PropagationSetup {
        float ReturnValue; // 0x0
        FVector CallFunc_GetComponentBounds_Origin; // 0x4
        FVector CallFunc_GetComponentBounds_BoxExtent; // 0x10
        float CallFunc_GetComponentBounds_SphereRadius; // 0x1c
        bool K2Node_SwitchInteger_CmpSuccess; // 0x20
        bool K2Node_SwitchEnum_CmpSuccess; // 0x21
        bool K2Node_SwitchInteger_CmpSuccess_1; // 0x22
        bool K2Node_SwitchInteger_CmpSuccess_2; // 0x23
        bool K2Node_SwitchInteger_CmpSuccess_3; // 0x24
        bool K2Node_SwitchInteger_CmpSuccess_4; // 0x25
        bool K2Node_SwitchInteger_CmpSuccess_5; // 0x26
    }; // Size: 0x27
    Params_PropagationSetup params{};
    params.CallFunc_GetComponentBounds_Origin = (FVector)CallFunc_GetComponentBounds_Origin;
    params.CallFunc_GetComponentBounds_BoxExtent = (FVector)CallFunc_GetComponentBounds_BoxExtent;
    params.CallFunc_GetComponentBounds_SphereRadius = (float)CallFunc_GetComponentBounds_SphereRadius;
    params.K2Node_SwitchInteger_CmpSuccess = (bool)K2Node_SwitchInteger_CmpSuccess;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.K2Node_SwitchInteger_CmpSuccess_1 = (bool)K2Node_SwitchInteger_CmpSuccess_1;
    params.K2Node_SwitchInteger_CmpSuccess_2 = (bool)K2Node_SwitchInteger_CmpSuccess_2;
    params.K2Node_SwitchInteger_CmpSuccess_3 = (bool)K2Node_SwitchInteger_CmpSuccess_3;
    params.K2Node_SwitchInteger_CmpSuccess_4 = (bool)K2Node_SwitchInteger_CmpSuccess_4;
    params.K2Node_SwitchInteger_CmpSuccess_5 = (bool)K2Node_SwitchInteger_CmpSuccess_5;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ABP_Torch_C::Lightswitch_Timeline__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.Lightswitch_Timeline__UpdateFunc"));
    struct Params_Lightswitch_Timeline__UpdateFunc {
    }; // Size: 0x0
    Params_Lightswitch_Timeline__UpdateFunc params{};
    ProcessEvent(func, &params);
}
uint8_t ABP_Torch_C::ModFunctionSetup0(uint8_t CallFunc_ModFunctionSetup_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.ModFunctionSetup"));
    struct Params_ModFunctionSetup {
        uint8_t ReturnValue; // 0x0
        uint8_t CallFunc_ModFunctionSetup_ReturnValue; // 0x1
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x2
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x3
    }; // Size: 0x4
    Params_ModFunctionSetup params{};
    params.CallFunc_ModFunctionSetup_ReturnValue = (uint8_t)CallFunc_ModFunctionSetup_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    ProcessEvent(func, &params);
    return (uint8_t)params.ReturnValue;
}
void ABP_Torch_C::ArrestoStart__DelegateSignature(bool bStart, UArrestoMomentumComponent* ArrestoComp, float TimeDilation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.ArrestoStart__DelegateSignature"));
    struct Params_ArrestoStart__DelegateSignature {
        bool bStart; // 0x0
        char pad_1[0x7];
        UArrestoMomentumComponent* ArrestoComp; // 0x8
        float TimeDilation; // 0x10
    }; // Size: 0x14
    Params_ArrestoStart__DelegateSignature params{};
    params.bStart = (bool)bStart;
    params.ArrestoComp = (UArrestoMomentumComponent*)ArrestoComp;
    params.TimeDilation = (float)TimeDilation;
    ProcessEvent(func, &params);
}
void ABP_Torch_C::Timeline_1__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.Timeline_1__UpdateFunc"));
    struct Params_Timeline_1__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_1__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_Torch_C::OnDry(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.OnDry"));
    struct Params_OnDry {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnDry params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_Torch_C::Lightswitch_Timeline__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.Lightswitch_Timeline__FinishedFunc"));
    struct Params_Lightswitch_Timeline__FinishedFunc {
    }; // Size: 0x0
    Params_Lightswitch_Timeline__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_Torch_C::DayNightMoonEvent(UDayNightMasterComponent* DayNightMaster, FName EventName, FSolarNormalizedTime NormalizedTime, FDateTime GameTime, EDayNightEventDirection MoonDirection, float MoonAltitudeDegrees, EMoonPhaseName Phase, bool bLate) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.DayNightMoonEvent"));
    struct Params_DayNightMoonEvent {
        UDayNightMasterComponent* DayNightMaster; // 0x0
        FName EventName; // 0x8
        FSolarNormalizedTime NormalizedTime; // 0x10
        char pad_14[0x4];
        FDateTime GameTime; // 0x18
        EDayNightEventDirection MoonDirection; // 0x20
        char pad_21[0x3];
        float MoonAltitudeDegrees; // 0x24
        EMoonPhaseName Phase; // 0x28
        bool bLate; // 0x29
    }; // Size: 0x2a
    Params_DayNightMoonEvent params{};
    params.DayNightMaster = (UDayNightMasterComponent*)DayNightMaster;
    params.EventName = (FName)EventName;
    params.NormalizedTime = (FSolarNormalizedTime)NormalizedTime;
    params.GameTime = (FDateTime)GameTime;
    params.MoonDirection = (EDayNightEventDirection)MoonDirection;
    params.MoonAltitudeDegrees = (float)MoonAltitudeDegrees;
    params.Phase = (EMoonPhaseName)Phase;
    params.bLate = (bool)bLate;
    ProcessEvent(func, &params);
}
void ABP_Torch_C::OnFailedToFreeze() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.OnFailedToFreeze"));
    struct Params_OnFailedToFreeze {
    }; // Size: 0x0
    Params_OnFailedToFreeze params{};
    ProcessEvent(func, &params);
}
void ABP_Torch_C::OnThaw(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.OnThaw"));
    struct Params_OnThaw {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnThaw params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_Torch_C::OnDecreaseWetness(float decreaseAmount) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.OnDecreaseWetness"));
    struct Params_OnDecreaseWetness {
        float decreaseAmount; // 0x0
    }; // Size: 0x4
    Params_OnDecreaseWetness params{};
    params.decreaseAmount = (float)decreaseAmount;
    ProcessEvent(func, &params);
}
void ABP_Torch_C::OnFailedToWet() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.OnFailedToWet"));
    struct Params_OnFailedToWet {
    }; // Size: 0x0
    Params_OnFailedToWet params{};
    ProcessEvent(func, &params);
}
void ABP_Torch_C::OnCaughtFire(UIncendioComponent* IncendioComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.OnCaughtFire"));
    struct Params_OnCaughtFire {
        UIncendioComponent* IncendioComponent; // 0x0
    }; // Size: 0x8
    Params_OnCaughtFire params{};
    params.IncendioComponent = (UIncendioComponent*)IncendioComponent;
    ProcessEvent(func, &params);
}
void ABP_Torch_C::OnFireExtinguished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.OnFireExtinguished"));
    struct Params_OnFireExtinguished {
    }; // Size: 0x0
    Params_OnFireExtinguished params{};
    ProcessEvent(func, &params);
}
void ABP_Torch_C::EndLight0(bool bLerp) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.EndLight"));
    struct Params_EndLight {
        bool bLerp; // 0x0
    }; // Size: 0x1
    Params_EndLight params{};
    params.bLerp = (bool)bLerp;
    ProcessEvent(func, &params);
}
void ABP_Torch_C::OnEnterLightTickRange(ULightComponent* LightComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.OnEnterLightTickRange"));
    struct Params_OnEnterLightTickRange {
        ULightComponent* LightComponent; // 0x0
    }; // Size: 0x8
    Params_OnEnterLightTickRange params{};
    params.LightComponent = (ULightComponent*)LightComponent;
    ProcessEvent(func, &params);
}
void ABP_Torch_C::SequentialLight0(FVector LightLoc) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.SequentialLight"));
    struct Params_SequentialLight {
        FVector LightLoc; // 0x0
    }; // Size: 0xc
    Params_SequentialLight params{};
    params.LightLoc = (FVector)LightLoc;
    ProcessEvent(func, &params);
}
void ABP_Torch_C::OnAttemptToFreeze() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.OnAttemptToFreeze"));
    struct Params_OnAttemptToFreeze {
    }; // Size: 0x0
    Params_OnAttemptToFreeze params{};
    ProcessEvent(func, &params);
}
void ABP_Torch_C::OnExtinguished__DelegateSignature(ABP_Torch_C* Torch) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.OnExtinguished__DelegateSignature"));
    struct Params_OnExtinguished__DelegateSignature {
        ABP_Torch_C* Torch; // 0x0
    }; // Size: 0x8
    Params_OnExtinguished__DelegateSignature params{};
    params.Torch = (ABP_Torch_C*)Torch;
    ProcessEvent(func, &params);
}
void ABP_Torch_C::OnAttemptToSetOnFire(FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.OnAttemptToSetOnFire"));
    struct Params_OnAttemptToSetOnFire {
        FVector Location; // 0x0
    }; // Size: 0xc
    Params_OnAttemptToSetOnFire params{};
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
}
void ABP_Torch_C::OnAttemptToApplyWetness(float Amount, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.OnAttemptToApplyWetness"));
    struct Params_OnAttemptToApplyWetness {
        float Amount; // 0x0
        FVector Location; // 0x4
    }; // Size: 0x10
    Params_OnAttemptToApplyWetness params{};
    params.Amount = (float)Amount;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
}
void ABP_Torch_C::OnArrestoMomentumBegin(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent, float TimeDilation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.OnArrestoMomentumBegin"));
    struct Params_OnArrestoMomentumBegin {
        AActor* Instigator; // 0x0
        UArrestoMomentumComponent* ArrestoMomentumComponent; // 0x8
        float TimeDilation; // 0x10
    }; // Size: 0x14
    Params_OnArrestoMomentumBegin params{};
    params.Instigator = (AActor*)Instigator;
    params.ArrestoMomentumComponent = (UArrestoMomentumComponent*)ArrestoMomentumComponent;
    params.TimeDilation = (float)TimeDilation;
    ProcessEvent(func, &params);
}
void ABP_Torch_C::OnExitLightTickRange(ULightComponent* LightComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.OnExitLightTickRange"));
    struct Params_OnExitLightTickRange {
        ULightComponent* LightComponent; // 0x0
    }; // Size: 0x8
    Params_OnExitLightTickRange params{};
    params.LightComponent = (ULightComponent*)LightComponent;
    ProcessEvent(func, &params);
}
void ABP_Torch_C::SwitchOn(AActor* SwitchActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.SwitchOn"));
    struct Params_SwitchOn {
        AActor* SwitchActor; // 0x0
    }; // Size: 0x8
    Params_SwitchOn params{};
    params.SwitchActor = (AActor*)SwitchActor;
    ProcessEvent(func, &params);
}
void ABP_Torch_C::Stop_Lerp() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.Stop_Lerp"));
    struct Params_Stop_Lerp {
    }; // Size: 0x0
    Params_Stop_Lerp params{};
    ProcessEvent(func, &params);
}
void ABP_Torch_C::SwitchOff(AActor* SwitchActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.SwitchOff"));
    struct Params_SwitchOff {
        AActor* SwitchActor; // 0x0
    }; // Size: 0x8
    Params_SwitchOff params{};
    params.SwitchActor = (AActor*)SwitchActor;
    ProcessEvent(func, &params);
}
void ABP_Torch_C::Lightswitch_Lerp0(bool bOn) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.Lightswitch_Lerp"));
    struct Params_Lightswitch_Lerp {
        bool bOn; // 0x0
    }; // Size: 0x1
    Params_Lightswitch_Lerp params{};
    params.bOn = (bool)bOn;
    ProcessEvent(func, &params);
}
void ABP_Torch_C::DayNightSunEvent(UDayNightMasterComponent* DayNightMaster, FName EventName, FSolarNormalizedTime NormalizedTime, FDateTime GameTime, EDayNightEventDirection SunDirection, float SunAltitudeDegrees, bool bLate) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.DayNightSunEvent"));
    struct Params_DayNightSunEvent {
        UDayNightMasterComponent* DayNightMaster; // 0x0
        FName EventName; // 0x8
        FSolarNormalizedTime NormalizedTime; // 0x10
        char pad_14[0x4];
        FDateTime GameTime; // 0x18
        EDayNightEventDirection SunDirection; // 0x20
        char pad_21[0x3];
        float SunAltitudeDegrees; // 0x24
        bool bLate; // 0x28
    }; // Size: 0x29
    Params_DayNightSunEvent params{};
    params.DayNightMaster = (UDayNightMasterComponent*)DayNightMaster;
    params.EventName = (FName)EventName;
    params.NormalizedTime = (FSolarNormalizedTime)NormalizedTime;
    params.GameTime = (FDateTime)GameTime;
    params.SunDirection = (EDayNightEventDirection)SunDirection;
    params.SunAltitudeDegrees = (float)SunAltitudeDegrees;
    params.bLate = (bool)bLate;
    ProcessEvent(func, &params);
}
void ABP_Torch_C::TorchDamaged__DelegateSignature(float Damage, FGameplayTagContainer MunitionTagContainer, AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.TorchDamaged__DelegateSignature"));
    struct Params_TorchDamaged__DelegateSignature {
        float Damage; // 0x0
        char pad_4[0x4];
        FGameplayTagContainer MunitionTagContainer; // 0x8
        AActor* Instigator; // 0x28
    }; // Size: 0x30
    Params_TorchDamaged__DelegateSignature params{};
    params.Damage = (float)Damage;
    params.MunitionTagContainer = (FGameplayTagContainer)MunitionTagContainer;
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_Torch_C::OnLit__DelegateSignature(ABP_Torch_C* Torch) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Torch.BP_Torch_C.OnLit__DelegateSignature"));
    struct Params_OnLit__DelegateSignature {
        ABP_Torch_C* Torch; // 0x0
    }; // Size: 0x8
    Params_OnLit__DelegateSignature params{};
    params.Torch = (ABP_Torch_C*)Torch;
    ProcessEvent(func, &params);
}
