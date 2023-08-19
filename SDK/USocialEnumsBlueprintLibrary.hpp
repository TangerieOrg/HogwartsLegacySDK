#pragma once
#include <cstdint>
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
#include "UIActionModes.hpp"
#include "UIHUDGroups.hpp"
#pragma pack(push, 1)
class USocialEnumsBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static USocialEnumsBlueprintLibrary* StaticClass();
    static FName GetUIHUDGroupNameFromID(UIHUDGroups inID);
    static UIHUDGroups GetUIHUDGroupFromName(FName& strName);
    static FName GetUIActionModeNameFromID(UIActionModes inID);
    static UIActionModes GetUIActionModeFromName(FName& strName);
    static FName GetSocialSemanticTypeIDNameFromID(SocialSemanticTypeIDs inID);
    static SocialSemanticTypeIDs GetSocialSemanticTypeIDFromName(FName& strName);
    static FName GetSocialSemanticIDNameFromID(SocialSemanticIDs inID);
    static SocialSemanticIDs GetSocialSemanticIDFromName(FName& strName);
    static FName GetSocialInteractionTypeIDNameFromID(SocialInteractionTypeIDs inID);
    static SocialInteractionTypeIDs GetSocialInteractionTypeIDFromName(FName& strName);
    static FName GetSocialInteractionDisplayStatusIDNameFromID(SocialInteractionDisplayStatusIDs inID);
    static SocialInteractionDisplayStatusIDs GetSocialInteractionDisplayStatusIDFromName(FName& strName);
    static FName GetSocialHeritageStatusIDNameFromID(SocialHeritageStatusIDs inID);
    static SocialHeritageStatusIDs GetSocialHeritageStatusIDFromName(FName& strName);
    static FName GetSocialConnectionIDNameFromID(SocialConnectionIDs inID);
    static SocialConnectionIDs GetSocialConnectionIDFromName(FName& strName);
    static FName GetSocialCapitalStatusIDNameFromID(SocialCapitalStatusIDs inID);
    static SocialCapitalStatusIDs GetSocialCapitalStatusIDFromName(FName& strName);
    static FName GetSocialActionTypeNameFromID(SocialActionTypes inID);
    static SocialActionTypes GetSocialActionTypeFromName(FName& strName);
    static FName GetSocialActionObserverTypeNameFromID(SocialActionObserverTypes inID);
    static SocialActionObserverTypes GetSocialActionObserverTypeFromName(FName& strName);
    static FName GetSkeletonTypeIDNameFromID(SkeletonTypeIDs inID);
    static SkeletonTypeIDs GetSkeletonTypeIDFromName(FName& strName);
    static FName GetPropTypeIDNameFromID(PropTypeIDs inID);
    static PropTypeIDs GetPropTypeIDFromName(FName& strName);
    static FName GetPropClassIDNameFromID(PropClassIDs inID);
    static PropClassIDs GetPropClassIDFromName(FName& strName);
    static FName GetHouseNameFromRegistryID(FString InRegistryID);
    static FName GetHouseIDNameFromID(HouseIds inID);
    static HouseIds GetHouseIDFromRegistryID(FString InRegistryID);
    static HouseIds GetHouseIDFromName(FName& strName);
    static FName GetCollisionTypeIDNameFromID(CollisionTypeIDs inID);
    static CollisionTypeIDs GetCollisionTypeIDFromName(FName& strName);
    static FName GetAmbientChatterTopicIDNameFromID(AmbientChatterTopicIDs inID);
    static AmbientChatterTopicIDs GetAmbientChatterTopicIDFromName(FName& strName);
    static FName GetActivityTypeIDNameFromID(ActivityTypeIDs inID);
    static ActivityTypeIDs GetActivityTypeIDFromName(FName& strName);
}; // Size: 0x28
#pragma pack(pop)
