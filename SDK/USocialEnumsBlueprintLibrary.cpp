#include "ActivityTypeIDs.hpp"
#include "AmbientChatterTopicIDs.hpp"
#include "CollisionTypeIDs.hpp"
#include "HouseIds.hpp"
#include "PropClassIDs.hpp"
#include "PropTypeIDs.hpp"
#include "SkeletonTypeIDs.hpp"
#include "SocialActionObserverTypes.hpp"
#include "SocialActionTypes.hpp"
#include "SocialCapitalStatusIDs.hpp"
#include "SocialConnectionIDs.hpp"
#include "SocialHeritageStatusIDs.hpp"
#include "SocialInteractionDisplayStatusIDs.hpp"
#include "SocialInteractionTypeIDs.hpp"
#include "SocialSemanticIDs.hpp"
#include "SocialSemanticTypeIDs.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UIActionModes.hpp"
#include "UIHUDGroups.hpp"
#include "USocialEnumsBlueprintLibrary.hpp"
USocialEnumsBlueprintLibrary* USocialEnumsBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SocialEnumsBlueprintLibrary");
    return (USocialEnumsBlueprintLibrary*)res;
}
FName USocialEnumsBlueprintLibrary::GetSocialConnectionIDNameFromID(SocialConnectionIDs inID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetSocialConnectionIDNameFromID"));
    struct Params_GetSocialConnectionIDNameFromID {
        SocialConnectionIDs inID; // 0x0
        char pad_1[0x3];
        FName ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetSocialConnectionIDNameFromID params{};
    params.inID = (SocialConnectionIDs)inID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName USocialEnumsBlueprintLibrary::GetUIHUDGroupNameFromID(UIHUDGroups inID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetUIHUDGroupNameFromID"));
    struct Params_GetUIHUDGroupNameFromID {
        UIHUDGroups inID; // 0x0
        char pad_1[0x3];
        FName ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetUIHUDGroupNameFromID params{};
    params.inID = (UIHUDGroups)inID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
UIHUDGroups USocialEnumsBlueprintLibrary::GetUIHUDGroupFromName(FName& strName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetUIHUDGroupFromName"));
    struct Params_GetUIHUDGroupFromName {
        FName strName; // 0x0
        UIHUDGroups ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetUIHUDGroupFromName params{};
    params.strName = (FName)strName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    strName = params.strName;
    return (UIHUDGroups)params.ReturnValue;
}
PropTypeIDs USocialEnumsBlueprintLibrary::GetPropTypeIDFromName(FName& strName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetPropTypeIDFromName"));
    struct Params_GetPropTypeIDFromName {
        FName strName; // 0x0
        PropTypeIDs ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetPropTypeIDFromName params{};
    params.strName = (FName)strName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    strName = params.strName;
    return (PropTypeIDs)params.ReturnValue;
}
FName USocialEnumsBlueprintLibrary::GetUIActionModeNameFromID(UIActionModes inID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetUIActionModeNameFromID"));
    struct Params_GetUIActionModeNameFromID {
        UIActionModes inID; // 0x0
        char pad_1[0x3];
        FName ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetUIActionModeNameFromID params{};
    params.inID = (UIActionModes)inID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName USocialEnumsBlueprintLibrary::GetSocialCapitalStatusIDNameFromID(SocialCapitalStatusIDs inID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetSocialCapitalStatusIDNameFromID"));
    struct Params_GetSocialCapitalStatusIDNameFromID {
        SocialCapitalStatusIDs inID; // 0x0
        char pad_1[0x3];
        FName ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetSocialCapitalStatusIDNameFromID params{};
    params.inID = (SocialCapitalStatusIDs)inID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
UIActionModes USocialEnumsBlueprintLibrary::GetUIActionModeFromName(FName& strName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetUIActionModeFromName"));
    struct Params_GetUIActionModeFromName {
        FName strName; // 0x0
        UIActionModes ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetUIActionModeFromName params{};
    params.strName = (FName)strName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    strName = params.strName;
    return (UIActionModes)params.ReturnValue;
}
SocialSemanticTypeIDs USocialEnumsBlueprintLibrary::GetSocialSemanticTypeIDFromName(FName& strName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetSocialSemanticTypeIDFromName"));
    struct Params_GetSocialSemanticTypeIDFromName {
        FName strName; // 0x0
        SocialSemanticTypeIDs ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetSocialSemanticTypeIDFromName params{};
    params.strName = (FName)strName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    strName = params.strName;
    return (SocialSemanticTypeIDs)params.ReturnValue;
}
FName USocialEnumsBlueprintLibrary::GetSocialSemanticTypeIDNameFromID(SocialSemanticTypeIDs inID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetSocialSemanticTypeIDNameFromID"));
    struct Params_GetSocialSemanticTypeIDNameFromID {
        SocialSemanticTypeIDs inID; // 0x0
        char pad_1[0x3];
        FName ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetSocialSemanticTypeIDNameFromID params{};
    params.inID = (SocialSemanticTypeIDs)inID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName USocialEnumsBlueprintLibrary::GetSocialSemanticIDNameFromID(SocialSemanticIDs inID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetSocialSemanticIDNameFromID"));
    struct Params_GetSocialSemanticIDNameFromID {
        SocialSemanticIDs inID; // 0x0
        char pad_1[0x3];
        FName ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetSocialSemanticIDNameFromID params{};
    params.inID = (SocialSemanticIDs)inID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
SocialSemanticIDs USocialEnumsBlueprintLibrary::GetSocialSemanticIDFromName(FName& strName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetSocialSemanticIDFromName"));
    struct Params_GetSocialSemanticIDFromName {
        FName strName; // 0x0
        SocialSemanticIDs ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetSocialSemanticIDFromName params{};
    params.strName = (FName)strName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    strName = params.strName;
    return (SocialSemanticIDs)params.ReturnValue;
}
FName USocialEnumsBlueprintLibrary::GetSocialInteractionTypeIDNameFromID(SocialInteractionTypeIDs inID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetSocialInteractionTypeIDNameFromID"));
    struct Params_GetSocialInteractionTypeIDNameFromID {
        SocialInteractionTypeIDs inID; // 0x0
        char pad_1[0x3];
        FName ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetSocialInteractionTypeIDNameFromID params{};
    params.inID = (SocialInteractionTypeIDs)inID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName USocialEnumsBlueprintLibrary::GetActivityTypeIDNameFromID(ActivityTypeIDs inID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetActivityTypeIDNameFromID"));
    struct Params_GetActivityTypeIDNameFromID {
        ActivityTypeIDs inID; // 0x0
        char pad_1[0x3];
        FName ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetActivityTypeIDNameFromID params{};
    params.inID = (ActivityTypeIDs)inID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
SocialInteractionTypeIDs USocialEnumsBlueprintLibrary::GetSocialInteractionTypeIDFromName(FName& strName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetSocialInteractionTypeIDFromName"));
    struct Params_GetSocialInteractionTypeIDFromName {
        FName strName; // 0x0
        SocialInteractionTypeIDs ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetSocialInteractionTypeIDFromName params{};
    params.strName = (FName)strName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    strName = params.strName;
    return (SocialInteractionTypeIDs)params.ReturnValue;
}
FName USocialEnumsBlueprintLibrary::GetSocialInteractionDisplayStatusIDNameFromID(SocialInteractionDisplayStatusIDs inID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetSocialInteractionDisplayStatusIDNameFromID"));
    struct Params_GetSocialInteractionDisplayStatusIDNameFromID {
        SocialInteractionDisplayStatusIDs inID; // 0x0
        char pad_1[0x3];
        FName ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetSocialInteractionDisplayStatusIDNameFromID params{};
    params.inID = (SocialInteractionDisplayStatusIDs)inID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
SocialInteractionDisplayStatusIDs USocialEnumsBlueprintLibrary::GetSocialInteractionDisplayStatusIDFromName(FName& strName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetSocialInteractionDisplayStatusIDFromName"));
    struct Params_GetSocialInteractionDisplayStatusIDFromName {
        FName strName; // 0x0
        SocialInteractionDisplayStatusIDs ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetSocialInteractionDisplayStatusIDFromName params{};
    params.strName = (FName)strName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    strName = params.strName;
    return (SocialInteractionDisplayStatusIDs)params.ReturnValue;
}
FName USocialEnumsBlueprintLibrary::GetSocialHeritageStatusIDNameFromID(SocialHeritageStatusIDs inID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetSocialHeritageStatusIDNameFromID"));
    struct Params_GetSocialHeritageStatusIDNameFromID {
        SocialHeritageStatusIDs inID; // 0x0
        char pad_1[0x3];
        FName ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetSocialHeritageStatusIDNameFromID params{};
    params.inID = (SocialHeritageStatusIDs)inID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
SocialHeritageStatusIDs USocialEnumsBlueprintLibrary::GetSocialHeritageStatusIDFromName(FName& strName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetSocialHeritageStatusIDFromName"));
    struct Params_GetSocialHeritageStatusIDFromName {
        FName strName; // 0x0
        SocialHeritageStatusIDs ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetSocialHeritageStatusIDFromName params{};
    params.strName = (FName)strName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    strName = params.strName;
    return (SocialHeritageStatusIDs)params.ReturnValue;
}
SocialConnectionIDs USocialEnumsBlueprintLibrary::GetSocialConnectionIDFromName(FName& strName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetSocialConnectionIDFromName"));
    struct Params_GetSocialConnectionIDFromName {
        FName strName; // 0x0
        SocialConnectionIDs ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetSocialConnectionIDFromName params{};
    params.strName = (FName)strName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    strName = params.strName;
    return (SocialConnectionIDs)params.ReturnValue;
}
SocialCapitalStatusIDs USocialEnumsBlueprintLibrary::GetSocialCapitalStatusIDFromName(FName& strName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetSocialCapitalStatusIDFromName"));
    struct Params_GetSocialCapitalStatusIDFromName {
        FName strName; // 0x0
        SocialCapitalStatusIDs ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetSocialCapitalStatusIDFromName params{};
    params.strName = (FName)strName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    strName = params.strName;
    return (SocialCapitalStatusIDs)params.ReturnValue;
}
HouseIds USocialEnumsBlueprintLibrary::GetHouseIDFromName(FName& strName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetHouseIDFromName"));
    struct Params_GetHouseIDFromName {
        FName strName; // 0x0
        HouseIds ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetHouseIDFromName params{};
    params.strName = (FName)strName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    strName = params.strName;
    return (HouseIds)params.ReturnValue;
}
FName USocialEnumsBlueprintLibrary::GetSocialActionTypeNameFromID(SocialActionTypes inID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetSocialActionTypeNameFromID"));
    struct Params_GetSocialActionTypeNameFromID {
        SocialActionTypes inID; // 0x0
        char pad_1[0x3];
        FName ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetSocialActionTypeNameFromID params{};
    params.inID = (SocialActionTypes)inID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
SocialActionTypes USocialEnumsBlueprintLibrary::GetSocialActionTypeFromName(FName& strName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetSocialActionTypeFromName"));
    struct Params_GetSocialActionTypeFromName {
        FName strName; // 0x0
        SocialActionTypes ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetSocialActionTypeFromName params{};
    params.strName = (FName)strName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    strName = params.strName;
    return (SocialActionTypes)params.ReturnValue;
}
FName USocialEnumsBlueprintLibrary::GetSocialActionObserverTypeNameFromID(SocialActionObserverTypes inID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetSocialActionObserverTypeNameFromID"));
    struct Params_GetSocialActionObserverTypeNameFromID {
        SocialActionObserverTypes inID; // 0x0
        char pad_1[0x3];
        FName ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetSocialActionObserverTypeNameFromID params{};
    params.inID = (SocialActionObserverTypes)inID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName USocialEnumsBlueprintLibrary::GetPropClassIDNameFromID(PropClassIDs inID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetPropClassIDNameFromID"));
    struct Params_GetPropClassIDNameFromID {
        PropClassIDs inID; // 0x0
        char pad_1[0x3];
        FName ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetPropClassIDNameFromID params{};
    params.inID = (PropClassIDs)inID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
SocialActionObserverTypes USocialEnumsBlueprintLibrary::GetSocialActionObserverTypeFromName(FName& strName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetSocialActionObserverTypeFromName"));
    struct Params_GetSocialActionObserverTypeFromName {
        FName strName; // 0x0
        SocialActionObserverTypes ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetSocialActionObserverTypeFromName params{};
    params.strName = (FName)strName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    strName = params.strName;
    return (SocialActionObserverTypes)params.ReturnValue;
}
FName USocialEnumsBlueprintLibrary::GetSkeletonTypeIDNameFromID(SkeletonTypeIDs inID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetSkeletonTypeIDNameFromID"));
    struct Params_GetSkeletonTypeIDNameFromID {
        SkeletonTypeIDs inID; // 0x0
        char pad_1[0x3];
        FName ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetSkeletonTypeIDNameFromID params{};
    params.inID = (SkeletonTypeIDs)inID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
AmbientChatterTopicIDs USocialEnumsBlueprintLibrary::GetAmbientChatterTopicIDFromName(FName& strName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetAmbientChatterTopicIDFromName"));
    struct Params_GetAmbientChatterTopicIDFromName {
        FName strName; // 0x0
        AmbientChatterTopicIDs ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetAmbientChatterTopicIDFromName params{};
    params.strName = (FName)strName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    strName = params.strName;
    return (AmbientChatterTopicIDs)params.ReturnValue;
}
SkeletonTypeIDs USocialEnumsBlueprintLibrary::GetSkeletonTypeIDFromName(FName& strName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetSkeletonTypeIDFromName"));
    struct Params_GetSkeletonTypeIDFromName {
        FName strName; // 0x0
        SkeletonTypeIDs ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetSkeletonTypeIDFromName params{};
    params.strName = (FName)strName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    strName = params.strName;
    return (SkeletonTypeIDs)params.ReturnValue;
}
FName USocialEnumsBlueprintLibrary::GetPropTypeIDNameFromID(PropTypeIDs inID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetPropTypeIDNameFromID"));
    struct Params_GetPropTypeIDNameFromID {
        PropTypeIDs inID; // 0x0
        char pad_1[0x3];
        FName ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetPropTypeIDNameFromID params{};
    params.inID = (PropTypeIDs)inID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
PropClassIDs USocialEnumsBlueprintLibrary::GetPropClassIDFromName(FName& strName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetPropClassIDFromName"));
    struct Params_GetPropClassIDFromName {
        FName strName; // 0x0
        PropClassIDs ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetPropClassIDFromName params{};
    params.strName = (FName)strName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    strName = params.strName;
    return (PropClassIDs)params.ReturnValue;
}
FName USocialEnumsBlueprintLibrary::GetHouseNameFromRegistryID(FString InRegistryID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetHouseNameFromRegistryID"));
    struct Params_GetHouseNameFromRegistryID {
        FString InRegistryID; // 0x0
        FName ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetHouseNameFromRegistryID params{};
    params.InRegistryID = (FString)InRegistryID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName USocialEnumsBlueprintLibrary::GetHouseIDNameFromID(HouseIds inID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetHouseIDNameFromID"));
    struct Params_GetHouseIDNameFromID {
        HouseIds inID; // 0x0
        char pad_1[0x3];
        FName ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetHouseIDNameFromID params{};
    params.inID = (HouseIds)inID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
HouseIds USocialEnumsBlueprintLibrary::GetHouseIDFromRegistryID(FString InRegistryID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetHouseIDFromRegistryID"));
    struct Params_GetHouseIDFromRegistryID {
        FString InRegistryID; // 0x0
        HouseIds ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetHouseIDFromRegistryID params{};
    params.InRegistryID = (FString)InRegistryID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (HouseIds)params.ReturnValue;
}
FName USocialEnumsBlueprintLibrary::GetCollisionTypeIDNameFromID(CollisionTypeIDs inID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetCollisionTypeIDNameFromID"));
    struct Params_GetCollisionTypeIDNameFromID {
        CollisionTypeIDs inID; // 0x0
        char pad_1[0x3];
        FName ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetCollisionTypeIDNameFromID params{};
    params.inID = (CollisionTypeIDs)inID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
CollisionTypeIDs USocialEnumsBlueprintLibrary::GetCollisionTypeIDFromName(FName& strName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetCollisionTypeIDFromName"));
    struct Params_GetCollisionTypeIDFromName {
        FName strName; // 0x0
        CollisionTypeIDs ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetCollisionTypeIDFromName params{};
    params.strName = (FName)strName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    strName = params.strName;
    return (CollisionTypeIDs)params.ReturnValue;
}
FName USocialEnumsBlueprintLibrary::GetAmbientChatterTopicIDNameFromID(AmbientChatterTopicIDs inID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetAmbientChatterTopicIDNameFromID"));
    struct Params_GetAmbientChatterTopicIDNameFromID {
        AmbientChatterTopicIDs inID; // 0x0
        char pad_1[0x3];
        FName ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetAmbientChatterTopicIDNameFromID params{};
    params.inID = (AmbientChatterTopicIDs)inID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
ActivityTypeIDs USocialEnumsBlueprintLibrary::GetActivityTypeIDFromName(FName& strName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialEnumsBlueprintLibrary.GetActivityTypeIDFromName"));
    struct Params_GetActivityTypeIDFromName {
        FName strName; // 0x0
        ActivityTypeIDs ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetActivityTypeIDFromName params{};
    params.strName = (FName)strName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    strName = params.strName;
    return (ActivityTypeIDs)params.ReturnValue;
}
