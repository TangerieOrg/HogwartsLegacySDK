#include "AActor.hpp"
#include "ACameraStackActor.hpp"
#include "ACharacter.hpp"
#include "AHUD.hpp"
#include "APhoenixHUD.hpp"
#include "APlayerController.hpp"
#include "ECreaturePregnancyState.hpp"
#include "ENotificationCategory.hpp"
#include "FGearItem.hpp"
#include "FGearTraitRecipeData.hpp"
#include "FGeometry.hpp"
#include "FTimespan.hpp"
#include "FTransfigurationUnlockSource.hpp"
#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UCameraStackTarget.hpp"
#include "UCreatureDefinition.hpp"
#include "UCreatureManager.hpp"
#include "UCreatureState.hpp"
#include "UFL_NurturingFunctionLibary_C.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UWidget.hpp"
void UFL_NurturingFunctionLibary_C::GetCreatureDisplayNameFromUIDName(FName CreatureUID, UObject* __WorldContext, FString& OutName, bool& OutIsLocalizationKey, UCreatureManager* CallFunc_Get_ReturnValue, UCreatureState* CallFunc_BP_GetCreatureStateByFName_ReturnValue, FString CallFunc_GetCreatureDisplayName_OutName, bool CallFunc_GetCreatureDisplayName_OutIsLocalizationKey, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/FL_NurturingFunctionLibary.FL_NurturingFunctionLibary_C.GetCreatureDisplayNameFromUIDName"));
    struct Params_GetCreatureDisplayNameFromUIDName {
        FName CreatureUID; // 0x0
        UObject* __WorldContext; // 0x8
        FString OutName; // 0x10
        bool OutIsLocalizationKey; // 0x20
        char pad_21[0x7];
        UCreatureManager* CallFunc_Get_ReturnValue; // 0x28
        UCreatureState* CallFunc_BP_GetCreatureStateByFName_ReturnValue; // 0x30
        FString CallFunc_GetCreatureDisplayName_OutName; // 0x38
        bool CallFunc_GetCreatureDisplayName_OutIsLocalizationKey; // 0x48
        bool CallFunc_IsValid_ReturnValue; // 0x49
    }; // Size: 0x4a
    Params_GetCreatureDisplayNameFromUIDName params{};
    params.CreatureUID = (FName)CreatureUID;
    params.__WorldContext = (UObject*)__WorldContext;
    params.OutName = (FString)OutName;
    params.OutIsLocalizationKey = (bool)OutIsLocalizationKey;
    params.CallFunc_Get_ReturnValue = (UCreatureManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_BP_GetCreatureStateByFName_ReturnValue = (UCreatureState*)CallFunc_BP_GetCreatureStateByFName_ReturnValue;
    params.CallFunc_GetCreatureDisplayName_OutName = (FString)CallFunc_GetCreatureDisplayName_OutName;
    params.CallFunc_GetCreatureDisplayName_OutIsLocalizationKey = (bool)CallFunc_GetCreatureDisplayName_OutIsLocalizationKey;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutName = params.OutName;
    OutIsLocalizationKey = params.OutIsLocalizationKey;
}
void UFL_NurturingFunctionLibary_C::GetTotalAvailableTriats(FGearItem GearItem, UObject* __WorldContext, int32_t& TotalAvailableTraits, FName ActiveTraitName, int32_t AvailableTraitsCounter, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FName CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FName CallFunc_GetRarityFromGearItemID_ReturnValue, TArray<FGearTraitRecipeData>& CallFunc_GetGearTraitRecipes_AllRecipes, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, FGearTraitRecipeData CallFunc_Array_Get_Item_1, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32_t Temp_int_Variable, bool CallFunc_BooleanAND_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/FL_NurturingFunctionLibary.FL_NurturingFunctionLibary_C.GetTotalAvailableTriats"));
    struct Params_GetTotalAvailableTriats {
        FGearItem GearItem; // 0x0
        UObject* __WorldContext; // 0x58
        int32_t TotalAvailableTraits; // 0x60
        FName ActiveTraitName; // 0x64
        int32_t AvailableTraitsCounter; // 0x6c
        int32_t Temp_int_Loop_Counter_Variable; // 0x70
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x74
        FName CallFunc_Array_Get_Item; // 0x78
        int32_t CallFunc_Array_Length_ReturnValue; // 0x80
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x84
        char pad_85[0x3];
        FName CallFunc_GetRarityFromGearItemID_ReturnValue; // 0x88
        TArray<FGearTraitRecipeData> CallFunc_GetGearTraitRecipes_AllRecipes; // 0x90
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0xa0
        bool CallFunc_Less_IntInt_ReturnValue; // 0xa4
        char pad_a5[0x3];
        int32_t Temp_int_Array_Index_Variable; // 0xa8
        char pad_ac[0x4];
        FGearTraitRecipeData CallFunc_Array_Get_Item_1; // 0xb0
        bool CallFunc_NotEqual_NameName_ReturnValue; // 0xf8
        bool CallFunc_NotEqual_NameName_ReturnValue_1; // 0xf9
        bool CallFunc_BooleanAND_ReturnValue; // 0xfa
        bool CallFunc_BooleanAND_ReturnValue_1; // 0xfb
        int32_t Temp_int_Variable; // 0xfc
        bool CallFunc_BooleanAND_ReturnValue_2; // 0x100
        char pad_101[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x104
    }; // Size: 0x108
    Params_GetTotalAvailableTriats params{};
    params.GearItem = (FGearItem)GearItem;
    params.__WorldContext = (UObject*)__WorldContext;
    params.TotalAvailableTraits = (int32_t)TotalAvailableTraits;
    params.ActiveTraitName = (FName)ActiveTraitName;
    params.AvailableTraitsCounter = (int32_t)AvailableTraitsCounter;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_GetRarityFromGearItemID_ReturnValue = (FName)CallFunc_GetRarityFromGearItemID_ReturnValue;
    params.CallFunc_GetGearTraitRecipes_AllRecipes = (TArray<FGearTraitRecipeData>)CallFunc_GetGearTraitRecipes_AllRecipes;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Array_Get_Item_1 = (FGearTraitRecipeData)CallFunc_Array_Get_Item_1;
    params.CallFunc_NotEqual_NameName_ReturnValue = (bool)CallFunc_NotEqual_NameName_ReturnValue;
    params.CallFunc_NotEqual_NameName_ReturnValue_1 = (bool)CallFunc_NotEqual_NameName_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_BooleanAND_ReturnValue_2 = (bool)CallFunc_BooleanAND_ReturnValue_2;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TotalAvailableTraits = params.TotalAvailableTraits;
    CallFunc_GetGearTraitRecipes_AllRecipes = params.CallFunc_GetGearTraitRecipes_AllRecipes;
}
void UFL_NurturingFunctionLibary_C::GetAllAvailableTraitsForLoom(FGearItem GearItem, FName GearRarity, UObject* __WorldContext, int32_t& TotalAvailableTraits, FName ActiveTraitName, int32_t AvailableTraitsCounter, int32_t Temp_int_Array_Index_Variable, FName CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Variable, int32_t Temp_int_Loop_Counter_Variable_1, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Variable_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, TArray<FGearTraitRecipeData>& CallFunc_GetGearTraitRecipes_AllRecipes, int32_t CallFunc_Add_IntInt_ReturnValue_3, FGearTraitRecipeData CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue_4, int32_t Temp_int_Variable_2, TArray<FGearTraitRecipeData>& CallFunc_GetGearTraitRecipes_AllRecipes_1, FGearTraitRecipeData CallFunc_Array_Get_Item_2, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue_3, bool CallFunc_NotEqual_NameName_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, int32_t CallFunc_Add_IntInt_ReturnValue_5, TArray<FGearTraitRecipeData>& CallFunc_GetGearTraitRecipes_AllRecipes_2, int32_t CallFunc_Array_Length_ReturnValue_3, FGearTraitRecipeData CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_NotEqual_NameName_ReturnValue_5, bool CallFunc_NotEqual_NameName_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_8) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/FL_NurturingFunctionLibary.FL_NurturingFunctionLibary_C.GetAllAvailableTraitsForLoom"));
    struct Params_GetAllAvailableTraitsForLoom {
        FGearItem GearItem; // 0x0
        FName GearRarity; // 0x58
        UObject* __WorldContext; // 0x60
        int32_t TotalAvailableTraits; // 0x68
        FName ActiveTraitName; // 0x6c
        int32_t AvailableTraitsCounter; // 0x74
        int32_t Temp_int_Array_Index_Variable; // 0x78
        FName CallFunc_Array_Get_Item; // 0x7c
        int32_t CallFunc_Array_Length_ReturnValue; // 0x84
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x88
        char pad_89[0x3];
        int32_t Temp_int_Loop_Counter_Variable; // 0x8c
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x90
        int32_t Temp_int_Array_Index_Variable_1; // 0x94
        int32_t Temp_int_Variable; // 0x98
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x9c
        int32_t Temp_int_Loop_Counter_Variable_2; // 0xa0
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0xa4
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0xa8
        int32_t Temp_int_Array_Index_Variable_2; // 0xac
        int32_t Temp_int_Variable_1; // 0xb0
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0xb4
        bool CallFunc_NotEqual_NameName_ReturnValue; // 0xb5
        char pad_b6[0x2];
        TArray<FGearTraitRecipeData> CallFunc_GetGearTraitRecipes_AllRecipes; // 0xb8
        int32_t CallFunc_Add_IntInt_ReturnValue_3; // 0xc8
        char pad_cc[0x4];
        FGearTraitRecipeData CallFunc_Array_Get_Item_1; // 0xd0
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x118
        bool CallFunc_Less_IntInt_ReturnValue; // 0x11c
        bool CallFunc_NotEqual_NameName_ReturnValue_1; // 0x11d
        bool CallFunc_NotEqual_NameName_ReturnValue_2; // 0x11e
        bool CallFunc_BooleanAND_ReturnValue; // 0x11f
        bool CallFunc_BooleanAND_ReturnValue_1; // 0x120
        bool CallFunc_BooleanAND_ReturnValue_2; // 0x121
        char pad_122[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue_4; // 0x124
        int32_t Temp_int_Variable_2; // 0x128
        char pad_12c[0x4];
        TArray<FGearTraitRecipeData> CallFunc_GetGearTraitRecipes_AllRecipes_1; // 0x130
        FGearTraitRecipeData CallFunc_Array_Get_Item_2; // 0x140
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0x188
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x18c
        bool CallFunc_NotEqual_NameName_ReturnValue_3; // 0x18d
        bool CallFunc_NotEqual_NameName_ReturnValue_4; // 0x18e
        bool CallFunc_BooleanAND_ReturnValue_3; // 0x18f
        bool CallFunc_BooleanAND_ReturnValue_4; // 0x190
        bool CallFunc_BooleanAND_ReturnValue_5; // 0x191
        char pad_192[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue_5; // 0x194
        TArray<FGearTraitRecipeData> CallFunc_GetGearTraitRecipes_AllRecipes_2; // 0x198
        int32_t CallFunc_Array_Length_ReturnValue_3; // 0x1a8
        char pad_1ac[0x4];
        FGearTraitRecipeData CallFunc_Array_Get_Item_3; // 0x1b0
        bool CallFunc_Less_IntInt_ReturnValue_2; // 0x1f8
        bool CallFunc_NotEqual_NameName_ReturnValue_5; // 0x1f9
        bool CallFunc_NotEqual_NameName_ReturnValue_6; // 0x1fa
        bool CallFunc_BooleanAND_ReturnValue_6; // 0x1fb
        bool CallFunc_BooleanAND_ReturnValue_7; // 0x1fc
        bool CallFunc_BooleanAND_ReturnValue_8; // 0x1fd
    }; // Size: 0x1fe
    Params_GetAllAvailableTraitsForLoom params{};
    params.GearItem = (FGearItem)GearItem;
    params.GearRarity = (FName)GearRarity;
    params.__WorldContext = (UObject*)__WorldContext;
    params.TotalAvailableTraits = (int32_t)TotalAvailableTraits;
    params.ActiveTraitName = (FName)ActiveTraitName;
    params.AvailableTraitsCounter = (int32_t)AvailableTraitsCounter;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.Temp_int_Loop_Counter_Variable_2 = (int32_t)Temp_int_Loop_Counter_Variable_2;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    params.Temp_int_Array_Index_Variable_2 = (int32_t)Temp_int_Array_Index_Variable_2;
    params.Temp_int_Variable_1 = (int32_t)Temp_int_Variable_1;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_NotEqual_NameName_ReturnValue = (bool)CallFunc_NotEqual_NameName_ReturnValue;
    params.CallFunc_GetGearTraitRecipes_AllRecipes = (TArray<FGearTraitRecipeData>)CallFunc_GetGearTraitRecipes_AllRecipes;
    params.CallFunc_Add_IntInt_ReturnValue_3 = (int32_t)CallFunc_Add_IntInt_ReturnValue_3;
    params.CallFunc_Array_Get_Item_1 = (FGearTraitRecipeData)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_NotEqual_NameName_ReturnValue_1 = (bool)CallFunc_NotEqual_NameName_ReturnValue_1;
    params.CallFunc_NotEqual_NameName_ReturnValue_2 = (bool)CallFunc_NotEqual_NameName_ReturnValue_2;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue_2 = (bool)CallFunc_BooleanAND_ReturnValue_2;
    params.CallFunc_Add_IntInt_ReturnValue_4 = (int32_t)CallFunc_Add_IntInt_ReturnValue_4;
    params.Temp_int_Variable_2 = (int32_t)Temp_int_Variable_2;
    params.CallFunc_GetGearTraitRecipes_AllRecipes_1 = (TArray<FGearTraitRecipeData>)CallFunc_GetGearTraitRecipes_AllRecipes_1;
    params.CallFunc_Array_Get_Item_2 = (FGearTraitRecipeData)CallFunc_Array_Get_Item_2;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_NotEqual_NameName_ReturnValue_3 = (bool)CallFunc_NotEqual_NameName_ReturnValue_3;
    params.CallFunc_NotEqual_NameName_ReturnValue_4 = (bool)CallFunc_NotEqual_NameName_ReturnValue_4;
    params.CallFunc_BooleanAND_ReturnValue_3 = (bool)CallFunc_BooleanAND_ReturnValue_3;
    params.CallFunc_BooleanAND_ReturnValue_4 = (bool)CallFunc_BooleanAND_ReturnValue_4;
    params.CallFunc_BooleanAND_ReturnValue_5 = (bool)CallFunc_BooleanAND_ReturnValue_5;
    params.CallFunc_Add_IntInt_ReturnValue_5 = (int32_t)CallFunc_Add_IntInt_ReturnValue_5;
    params.CallFunc_GetGearTraitRecipes_AllRecipes_2 = (TArray<FGearTraitRecipeData>)CallFunc_GetGearTraitRecipes_AllRecipes_2;
    params.CallFunc_Array_Length_ReturnValue_3 = (int32_t)CallFunc_Array_Length_ReturnValue_3;
    params.CallFunc_Array_Get_Item_3 = (FGearTraitRecipeData)CallFunc_Array_Get_Item_3;
    params.CallFunc_Less_IntInt_ReturnValue_2 = (bool)CallFunc_Less_IntInt_ReturnValue_2;
    params.CallFunc_NotEqual_NameName_ReturnValue_5 = (bool)CallFunc_NotEqual_NameName_ReturnValue_5;
    params.CallFunc_NotEqual_NameName_ReturnValue_6 = (bool)CallFunc_NotEqual_NameName_ReturnValue_6;
    params.CallFunc_BooleanAND_ReturnValue_6 = (bool)CallFunc_BooleanAND_ReturnValue_6;
    params.CallFunc_BooleanAND_ReturnValue_7 = (bool)CallFunc_BooleanAND_ReturnValue_7;
    params.CallFunc_BooleanAND_ReturnValue_8 = (bool)CallFunc_BooleanAND_ReturnValue_8;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TotalAvailableTraits = params.TotalAvailableTraits;
    CallFunc_GetGearTraitRecipes_AllRecipes_1 = params.CallFunc_GetGearTraitRecipes_AllRecipes_1;
    CallFunc_GetGearTraitRecipes_AllRecipes = params.CallFunc_GetGearTraitRecipes_AllRecipes;
    CallFunc_GetGearTraitRecipes_AllRecipes_2 = params.CallFunc_GetGearTraitRecipes_AllRecipes_2;
}
UFL_NurturingFunctionLibary_C* UFL_NurturingFunctionLibary_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/Nurturing/FL_NurturingFunctionLibary.FL_NurturingFunctionLibary_C");
    return (UFL_NurturingFunctionLibary_C*)res;
}
void UFL_NurturingFunctionLibary_C::MoveCursorToCenterOfWidget(UWidget* Widget, UObject* __WorldContext, APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, FGeometry CallFunc_GetCachedGeometry_ReturnValue, FVector2D CallFunc_LocalToViewport_PixelPosition, FVector2D CallFunc_LocalToViewport_ViewportPosition, FVector2D CallFunc_GetAbsoluteSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D K2Node_MathExpression_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/FL_NurturingFunctionLibary.FL_NurturingFunctionLibary_C.MoveCursorToCenterOfWidget"));
    struct Params_MoveCursorToCenterOfWidget {
        UWidget* Widget; // 0x0
        UObject* __WorldContext; // 0x8
        APlayerController* CallFunc_GetOwningPlayer_ReturnValue; // 0x10
        bool CallFunc_IsValid_ReturnValue; // 0x18
        char pad_19[0x3];
        FVector2D CallFunc_GetViewportSize_ReturnValue; // 0x1c
        FGeometry CallFunc_GetCachedGeometry_ReturnValue; // 0x24
        FVector2D CallFunc_LocalToViewport_PixelPosition; // 0x5c
        FVector2D CallFunc_LocalToViewport_ViewportPosition; // 0x64
        FVector2D CallFunc_GetAbsoluteSize_ReturnValue; // 0x6c
        float CallFunc_BreakVector2D_X; // 0x74
        float CallFunc_BreakVector2D_Y; // 0x78
        FVector2D CallFunc_MakeVector2D_ReturnValue; // 0x7c
        FVector2D K2Node_MathExpression_ReturnValue; // 0x84
        float CallFunc_BreakVector2D_X_1; // 0x8c
        float CallFunc_BreakVector2D_Y_1; // 0x90
    }; // Size: 0x94
    Params_MoveCursorToCenterOfWidget params{};
    params.Widget = (UWidget*)Widget;
    params.__WorldContext = (UObject*)__WorldContext;
    params.CallFunc_GetOwningPlayer_ReturnValue = (APlayerController*)CallFunc_GetOwningPlayer_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetViewportSize_ReturnValue = (FVector2D)CallFunc_GetViewportSize_ReturnValue;
    params.CallFunc_GetCachedGeometry_ReturnValue = (FGeometry)CallFunc_GetCachedGeometry_ReturnValue;
    params.CallFunc_LocalToViewport_PixelPosition = (FVector2D)CallFunc_LocalToViewport_PixelPosition;
    params.CallFunc_LocalToViewport_ViewportPosition = (FVector2D)CallFunc_LocalToViewport_ViewportPosition;
    params.CallFunc_GetAbsoluteSize_ReturnValue = (FVector2D)CallFunc_GetAbsoluteSize_ReturnValue;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_MakeVector2D_ReturnValue = (FVector2D)CallFunc_MakeVector2D_ReturnValue;
    params.K2Node_MathExpression_ReturnValue = (FVector2D)K2Node_MathExpression_ReturnValue;
    params.CallFunc_BreakVector2D_X_1 = (float)CallFunc_BreakVector2D_X_1;
    params.CallFunc_BreakVector2D_Y_1 = (float)CallFunc_BreakVector2D_Y_1;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UFL_NurturingFunctionLibary_C::ToggleHideHUDForNurturingScreen(bool Hide, UObject* Provider, UObject* __WorldContext, TArray<ENotificationCategory> NotificationCategories, TArray<FString> HUDElementsToHide, TArray<FString>& K2Node_MakeArray_Array, APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, APhoenixHUD* K2Node_DynamicCast_AsPhoenix_HUD, bool K2Node_DynamicCast_bSuccess, TArray<ENotificationCategory>& K2Node_MakeArray_Array_1) {}
void UFL_NurturingFunctionLibary_C::Get_Creature_Pregnancy_Durations(UCreatureState* CreatureState, UObject* __WorldContext, FTimespan& TotalDuration, FTimespan& DurationRemaining, FTimespan CallFunc_MakeTimespan_ReturnValue, FTimespan CallFunc_GetHatchingTimeRemaining_ReturnValue, FTimespan CallFunc_GetGestationTimeRemaining_ReturnValue, ECreaturePregnancyState CallFunc_GetPregnancyState_ReturnValue, UCreatureDefinition* CallFunc_GetDefinition_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FTimespan CallFunc_GetPregnancyDuration_ReturnValue, FTimespan CallFunc_GetHatchingDuration_ReturnValue, bool CallFunc_IsEggLaying_ReturnValue, FTimespan CallFunc_Add_TimespanTimespan_ReturnValue, FTimespan CallFunc_Add_TimespanTimespan_ReturnValue_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, FTimespan K2Node_Select_Default, FTimespan K2Node_Select_Default_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/FL_NurturingFunctionLibary.FL_NurturingFunctionLibary_C.Get Creature Pregnancy Durations"));
    struct Params_Get_Creature_Pregnancy_Durations {
        UCreatureState* CreatureState; // 0x0
        UObject* __WorldContext; // 0x8
        FTimespan TotalDuration; // 0x10
        FTimespan DurationRemaining; // 0x18
        FTimespan CallFunc_MakeTimespan_ReturnValue; // 0x20
        FTimespan CallFunc_GetHatchingTimeRemaining_ReturnValue; // 0x28
        FTimespan CallFunc_GetGestationTimeRemaining_ReturnValue; // 0x30
        ECreaturePregnancyState CallFunc_GetPregnancyState_ReturnValue; // 0x38
        char pad_39[0x7];
        UCreatureDefinition* CallFunc_GetDefinition_ReturnValue; // 0x40
        bool K2Node_SwitchEnum_CmpSuccess; // 0x48
        char pad_49[0x7];
        FTimespan CallFunc_GetPregnancyDuration_ReturnValue; // 0x50
        FTimespan CallFunc_GetHatchingDuration_ReturnValue; // 0x58
        bool CallFunc_IsEggLaying_ReturnValue; // 0x60
        char pad_61[0x7];
        FTimespan CallFunc_Add_TimespanTimespan_ReturnValue; // 0x68
        FTimespan CallFunc_Add_TimespanTimespan_ReturnValue_1; // 0x70
        bool Temp_bool_Variable; // 0x78
        bool Temp_bool_Variable_1; // 0x79
        char pad_7a[0x6];
        FTimespan K2Node_Select_Default; // 0x80
        FTimespan K2Node_Select_Default_1; // 0x88
    }; // Size: 0x90
    Params_Get_Creature_Pregnancy_Durations params{};
    params.CreatureState = (UCreatureState*)CreatureState;
    params.__WorldContext = (UObject*)__WorldContext;
    params.TotalDuration = (FTimespan)TotalDuration;
    params.DurationRemaining = (FTimespan)DurationRemaining;
    params.CallFunc_MakeTimespan_ReturnValue = (FTimespan)CallFunc_MakeTimespan_ReturnValue;
    params.CallFunc_GetHatchingTimeRemaining_ReturnValue = (FTimespan)CallFunc_GetHatchingTimeRemaining_ReturnValue;
    params.CallFunc_GetGestationTimeRemaining_ReturnValue = (FTimespan)CallFunc_GetGestationTimeRemaining_ReturnValue;
    params.CallFunc_GetPregnancyState_ReturnValue = (ECreaturePregnancyState)CallFunc_GetPregnancyState_ReturnValue;
    params.CallFunc_GetDefinition_ReturnValue = (UCreatureDefinition*)CallFunc_GetDefinition_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.CallFunc_GetPregnancyDuration_ReturnValue = (FTimespan)CallFunc_GetPregnancyDuration_ReturnValue;
    params.CallFunc_GetHatchingDuration_ReturnValue = (FTimespan)CallFunc_GetHatchingDuration_ReturnValue;
    params.CallFunc_IsEggLaying_ReturnValue = (bool)CallFunc_IsEggLaying_ReturnValue;
    params.CallFunc_Add_TimespanTimespan_ReturnValue = (FTimespan)CallFunc_Add_TimespanTimespan_ReturnValue;
    params.CallFunc_Add_TimespanTimespan_ReturnValue_1 = (FTimespan)CallFunc_Add_TimespanTimespan_ReturnValue_1;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.K2Node_Select_Default = (FTimespan)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (FTimespan)K2Node_Select_Default_1;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TotalDuration = params.TotalDuration;
    DurationRemaining = params.DurationRemaining;
}
void UFL_NurturingFunctionLibary_C::GetIsUsingPlayerCamera(UObject* __WorldContext, bool& UsingPlayerCamera, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, AActor* CallFunc_GetViewTarget_ReturnValue, ACameraStackActor* K2Node_DynamicCast_AsCamera_Stack_Actor, bool K2Node_DynamicCast_bSuccess, UCameraStackTarget* CallFunc_GetTarget_ReturnValue, AActor* CallFunc_GetTargetActor_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/FL_NurturingFunctionLibary.FL_NurturingFunctionLibary_C.GetIsUsingPlayerCamera"));
    struct Params_GetIsUsingPlayerCamera {
        UObject* __WorldContext; // 0x0
        bool UsingPlayerCamera; // 0x8
        char pad_9[0x7];
        ACharacter* CallFunc_GetPlayerCharacter_ReturnValue; // 0x10
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x18
        AActor* CallFunc_GetViewTarget_ReturnValue; // 0x20
        ACameraStackActor* K2Node_DynamicCast_AsCamera_Stack_Actor; // 0x28
        bool K2Node_DynamicCast_bSuccess; // 0x30
        char pad_31[0x7];
        UCameraStackTarget* CallFunc_GetTarget_ReturnValue; // 0x38
        AActor* CallFunc_GetTargetActor_ReturnValue; // 0x40
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x48
    }; // Size: 0x49
    Params_GetIsUsingPlayerCamera params{};
    params.__WorldContext = (UObject*)__WorldContext;
    params.UsingPlayerCamera = (bool)UsingPlayerCamera;
    params.CallFunc_GetPlayerCharacter_ReturnValue = (ACharacter*)CallFunc_GetPlayerCharacter_ReturnValue;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_GetViewTarget_ReturnValue = (AActor*)CallFunc_GetViewTarget_ReturnValue;
    params.K2Node_DynamicCast_AsCamera_Stack_Actor = (ACameraStackActor*)K2Node_DynamicCast_AsCamera_Stack_Actor;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetTarget_ReturnValue = (UCameraStackTarget*)CallFunc_GetTarget_ReturnValue;
    params.CallFunc_GetTargetActor_ReturnValue = (AActor*)CallFunc_GetTargetActor_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    UsingPlayerCamera = params.UsingPlayerCamera;
}
void UFL_NurturingFunctionLibary_C::Get_Can_View_Creature_Details(UCreatureState* CreatureState, UObject* __WorldContext, bool& CanMoveCreature, FString& ErrorMsgKey, bool CallFunc_IsUnbornCreature_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/FL_NurturingFunctionLibary.FL_NurturingFunctionLibary_C.Get Can View Creature Details"));
    struct Params_Get_Can_View_Creature_Details {
        UCreatureState* CreatureState; // 0x0
        UObject* __WorldContext; // 0x8
        bool CanMoveCreature; // 0x10
        char pad_11[0x7];
        FString ErrorMsgKey; // 0x18
        bool CallFunc_IsUnbornCreature_ReturnValue; // 0x28
    }; // Size: 0x29
    Params_Get_Can_View_Creature_Details params{};
    params.CreatureState = (UCreatureState*)CreatureState;
    params.__WorldContext = (UObject*)__WorldContext;
    params.CanMoveCreature = (bool)CanMoveCreature;
    params.ErrorMsgKey = (FString)ErrorMsgKey;
    params.CallFunc_IsUnbornCreature_ReturnValue = (bool)CallFunc_IsUnbornCreature_ReturnValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CanMoveCreature = params.CanMoveCreature;
    ErrorMsgKey = params.ErrorMsgKey;
}
void UFL_NurturingFunctionLibary_C::Get_Can_Summon_Creature(UCreatureState* CreatureState, UObject* __WorldContext, bool& CanMoveCreature, FString& ErrorMsgKey, ECreaturePregnancyState CallFunc_GetPregnancyState_ReturnValue, UCreatureDefinition* CallFunc_GetDefinition_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsEgg_ReturnValue, bool CallFunc_IsUnbornCreature_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/FL_NurturingFunctionLibary.FL_NurturingFunctionLibary_C.Get Can Summon Creature"));
    struct Params_Get_Can_Summon_Creature {
        UCreatureState* CreatureState; // 0x0
        UObject* __WorldContext; // 0x8
        bool CanMoveCreature; // 0x10
        char pad_11[0x7];
        FString ErrorMsgKey; // 0x18
        ECreaturePregnancyState CallFunc_GetPregnancyState_ReturnValue; // 0x28
        char pad_29[0x7];
        UCreatureDefinition* CallFunc_GetDefinition_ReturnValue; // 0x30
        bool CallFunc_NotEqual_ByteByte_ReturnValue; // 0x38
        bool CallFunc_IsEgg_ReturnValue; // 0x39
        bool CallFunc_IsUnbornCreature_ReturnValue; // 0x3a
    }; // Size: 0x3b
    Params_Get_Can_Summon_Creature params{};
    params.CreatureState = (UCreatureState*)CreatureState;
    params.__WorldContext = (UObject*)__WorldContext;
    params.CanMoveCreature = (bool)CanMoveCreature;
    params.ErrorMsgKey = (FString)ErrorMsgKey;
    params.CallFunc_GetPregnancyState_ReturnValue = (ECreaturePregnancyState)CallFunc_GetPregnancyState_ReturnValue;
    params.CallFunc_GetDefinition_ReturnValue = (UCreatureDefinition*)CallFunc_GetDefinition_ReturnValue;
    params.CallFunc_NotEqual_ByteByte_ReturnValue = (bool)CallFunc_NotEqual_ByteByte_ReturnValue;
    params.CallFunc_IsEgg_ReturnValue = (bool)CallFunc_IsEgg_ReturnValue;
    params.CallFunc_IsUnbornCreature_ReturnValue = (bool)CallFunc_IsUnbornCreature_ReturnValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CanMoveCreature = params.CanMoveCreature;
    ErrorMsgKey = params.ErrorMsgKey;
}
void UFL_NurturingFunctionLibary_C::GetTimeRemainingText(FTimespan TimeRemaining, UObject* __WorldContext) {}
void UFL_NurturingFunctionLibary_C::GetCanMoveCreatureOutOfNurtureSpace(UCreatureState* CreatureState, UObject* __WorldContext, bool& CanMoveCreature, FString& ErrorMsgKey, ECreaturePregnancyState CallFunc_GetPregnancyState_ReturnValue, UCreatureDefinition* CallFunc_GetDefinition_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsEgg_ReturnValue, bool CallFunc_IsUnbornCreature_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/FL_NurturingFunctionLibary.FL_NurturingFunctionLibary_C.GetCanMoveCreatureOutOfNurtureSpace"));
    struct Params_GetCanMoveCreatureOutOfNurtureSpace {
        UCreatureState* CreatureState; // 0x0
        UObject* __WorldContext; // 0x8
        bool CanMoveCreature; // 0x10
        char pad_11[0x7];
        FString ErrorMsgKey; // 0x18
        ECreaturePregnancyState CallFunc_GetPregnancyState_ReturnValue; // 0x28
        char pad_29[0x7];
        UCreatureDefinition* CallFunc_GetDefinition_ReturnValue; // 0x30
        bool CallFunc_NotEqual_ByteByte_ReturnValue; // 0x38
        bool CallFunc_IsEgg_ReturnValue; // 0x39
        bool CallFunc_IsUnbornCreature_ReturnValue; // 0x3a
    }; // Size: 0x3b
    Params_GetCanMoveCreatureOutOfNurtureSpace params{};
    params.CreatureState = (UCreatureState*)CreatureState;
    params.__WorldContext = (UObject*)__WorldContext;
    params.CanMoveCreature = (bool)CanMoveCreature;
    params.ErrorMsgKey = (FString)ErrorMsgKey;
    params.CallFunc_GetPregnancyState_ReturnValue = (ECreaturePregnancyState)CallFunc_GetPregnancyState_ReturnValue;
    params.CallFunc_GetDefinition_ReturnValue = (UCreatureDefinition*)CallFunc_GetDefinition_ReturnValue;
    params.CallFunc_NotEqual_ByteByte_ReturnValue = (bool)CallFunc_NotEqual_ByteByte_ReturnValue;
    params.CallFunc_IsEgg_ReturnValue = (bool)CallFunc_IsEgg_ReturnValue;
    params.CallFunc_IsUnbornCreature_ReturnValue = (bool)CallFunc_IsUnbornCreature_ReturnValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CanMoveCreature = params.CanMoveCreature;
    ErrorMsgKey = params.ErrorMsgKey;
}
void UFL_NurturingFunctionLibary_C::GetUnlockTextFromUnlockSource(FTransfigurationUnlockSource Unlock_Source, UObject* __WorldContext) {}
void UFL_NurturingFunctionLibary_C::GetUnbornCreatureIconTextureName(UCreatureDefinition* CreatureDefinition, UObject* __WorldContext, FString& IconTextureName, bool Temp_bool_Variable, bool CallFunc_IsEggLaying_ReturnValue, FName CallFunc_GetEggTypeID_ReturnValue, FName CallFunc_GetOffspringCreatureTypeID_ReturnValue, FName K2Node_Select_Default, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/FL_NurturingFunctionLibary.FL_NurturingFunctionLibary_C.GetUnbornCreatureIconTextureName"));
    struct Params_GetUnbornCreatureIconTextureName {
        UCreatureDefinition* CreatureDefinition; // 0x0
        UObject* __WorldContext; // 0x8
        FString IconTextureName; // 0x10
        bool Temp_bool_Variable; // 0x20
        bool CallFunc_IsEggLaying_ReturnValue; // 0x21
        char pad_22[0x2];
        FName CallFunc_GetEggTypeID_ReturnValue; // 0x24
        FName CallFunc_GetOffspringCreatureTypeID_ReturnValue; // 0x2c
        FName K2Node_Select_Default; // 0x34
        char pad_3c[0x4];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x40
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x50
    }; // Size: 0x60
    Params_GetUnbornCreatureIconTextureName params{};
    params.CreatureDefinition = (UCreatureDefinition*)CreatureDefinition;
    params.__WorldContext = (UObject*)__WorldContext;
    params.IconTextureName = (FString)IconTextureName;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_IsEggLaying_ReturnValue = (bool)CallFunc_IsEggLaying_ReturnValue;
    params.CallFunc_GetEggTypeID_ReturnValue = (FName)CallFunc_GetEggTypeID_ReturnValue;
    params.CallFunc_GetOffspringCreatureTypeID_ReturnValue = (FName)CallFunc_GetOffspringCreatureTypeID_ReturnValue;
    params.K2Node_Select_Default = (FName)K2Node_Select_Default;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    IconTextureName = params.IconTextureName;
}
void UFL_NurturingFunctionLibary_C::SetTextToCreatureName(UCreatureState* CreatureState, UPhoenixTextBlock* PhoenixTextBlock, UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, FString CallFunc_GetCreatureDisplayName_OutName, bool CallFunc_GetCreatureDisplayName_OutIsLocalizationKey) {}
void UFL_NurturingFunctionLibary_C::GetCreatureIconTextureName(UCreatureState* CreatureState, UObject* __WorldContext, FString& IconTextureName, bool CallFunc_IsValid_ReturnValue, FString CallFunc_GetIconString_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/FL_NurturingFunctionLibary.FL_NurturingFunctionLibary_C.GetCreatureIconTextureName"));
    struct Params_GetCreatureIconTextureName {
        UCreatureState* CreatureState; // 0x0
        UObject* __WorldContext; // 0x8
        FString IconTextureName; // 0x10
        bool CallFunc_IsValid_ReturnValue; // 0x20
        char pad_21[0x7];
        FString CallFunc_GetIconString_ReturnValue; // 0x28
    }; // Size: 0x38
    Params_GetCreatureIconTextureName params{};
    params.CreatureState = (UCreatureState*)CreatureState;
    params.__WorldContext = (UObject*)__WorldContext;
    params.IconTextureName = (FString)IconTextureName;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetIconString_ReturnValue = (FString)CallFunc_GetIconString_ReturnValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    IconTextureName = params.IconTextureName;
}
void UFL_NurturingFunctionLibary_C::GetCreatureInventoryInfoString(FName InVariation, UObject* __WorldContext, FString& OutInfoString, FString InfoString, UCreatureManager* CallFunc_Get_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, UCreatureManager* CallFunc_Get_ReturnValue_1, UCreatureState* CallFunc_BP_GetCreatureStateByFName_ReturnValue, bool CallFunc_GetIsMale_ReturnValue, bool CallFunc_IsValid_ReturnValue, FName CallFunc_GetTypeID_ReturnValue, UCreatureDefinition* CallFunc_BP_GetCreatureDefinitionByType_ReturnValue, bool CallFunc_IsOffspring_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/FL_NurturingFunctionLibary.FL_NurturingFunctionLibary_C.GetCreatureInventoryInfoString"));
    struct Params_GetCreatureInventoryInfoString {
        FName InVariation; // 0x0
        UObject* __WorldContext; // 0x8
        FString OutInfoString; // 0x10
        FString InfoString; // 0x20
        UCreatureManager* CallFunc_Get_ReturnValue; // 0x30
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x38
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x48
        FString CallFunc_Concat_StrStr_ReturnValue_2; // 0x58
        UCreatureManager* CallFunc_Get_ReturnValue_1; // 0x68
        UCreatureState* CallFunc_BP_GetCreatureStateByFName_ReturnValue; // 0x70
        bool CallFunc_GetIsMale_ReturnValue; // 0x78
        bool CallFunc_IsValid_ReturnValue; // 0x79
        char pad_7a[0x2];
        FName CallFunc_GetTypeID_ReturnValue; // 0x7c
        char pad_84[0x4];
        UCreatureDefinition* CallFunc_BP_GetCreatureDefinitionByType_ReturnValue; // 0x88
        bool CallFunc_IsOffspring_ReturnValue; // 0x90
    }; // Size: 0x91
    Params_GetCreatureInventoryInfoString params{};
    params.InVariation = (FName)InVariation;
    params.__WorldContext = (UObject*)__WorldContext;
    params.OutInfoString = (FString)OutInfoString;
    params.InfoString = (FString)InfoString;
    params.CallFunc_Get_ReturnValue = (UCreatureManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue_2 = (FString)CallFunc_Concat_StrStr_ReturnValue_2;
    params.CallFunc_Get_ReturnValue_1 = (UCreatureManager*)CallFunc_Get_ReturnValue_1;
    params.CallFunc_BP_GetCreatureStateByFName_ReturnValue = (UCreatureState*)CallFunc_BP_GetCreatureStateByFName_ReturnValue;
    params.CallFunc_GetIsMale_ReturnValue = (bool)CallFunc_GetIsMale_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetTypeID_ReturnValue = (FName)CallFunc_GetTypeID_ReturnValue;
    params.CallFunc_BP_GetCreatureDefinitionByType_ReturnValue = (UCreatureDefinition*)CallFunc_BP_GetCreatureDefinitionByType_ReturnValue;
    params.CallFunc_IsOffspring_ReturnValue = (bool)CallFunc_IsOffspring_ReturnValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutInfoString = params.OutInfoString;
}
void UFL_NurturingFunctionLibary_C::GetCreatureInventoryButtonLegend(UObject* __WorldContext) {}
void UFL_NurturingFunctionLibary_C::GetCreatureSpecies(FName InCreatureUID, UObject* __WorldContext, FString& CreatureSpecies, UCreatureManager* CallFunc_Get_ReturnValue, UCreatureState* CallFunc_BP_GetCreatureStateByFName_ReturnValue, FName CallFunc_GetTypeID_ReturnValue, bool CallFunc_IsValid_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_LeftChop_ReturnValue, bool CallFunc_Contains_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/FL_NurturingFunctionLibary.FL_NurturingFunctionLibary_C.GetCreatureSpecies"));
    struct Params_GetCreatureSpecies {
        FName InCreatureUID; // 0x0
        UObject* __WorldContext; // 0x8
        FString CreatureSpecies; // 0x10
        UCreatureManager* CallFunc_Get_ReturnValue; // 0x20
        UCreatureState* CallFunc_BP_GetCreatureStateByFName_ReturnValue; // 0x28
        FName CallFunc_GetTypeID_ReturnValue; // 0x30
        bool CallFunc_IsValid_ReturnValue; // 0x38
        char pad_39[0x7];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x40
        FString CallFunc_LeftChop_ReturnValue; // 0x50
        bool CallFunc_Contains_ReturnValue; // 0x60
    }; // Size: 0x61
    Params_GetCreatureSpecies params{};
    params.InCreatureUID = (FName)InCreatureUID;
    params.__WorldContext = (UObject*)__WorldContext;
    params.CreatureSpecies = (FString)CreatureSpecies;
    params.CallFunc_Get_ReturnValue = (UCreatureManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_BP_GetCreatureStateByFName_ReturnValue = (UCreatureState*)CallFunc_BP_GetCreatureStateByFName_ReturnValue;
    params.CallFunc_GetTypeID_ReturnValue = (FName)CallFunc_GetTypeID_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_LeftChop_ReturnValue = (FString)CallFunc_LeftChop_ReturnValue;
    params.CallFunc_Contains_ReturnValue = (bool)CallFunc_Contains_ReturnValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CreatureSpecies = params.CreatureSpecies;
}
