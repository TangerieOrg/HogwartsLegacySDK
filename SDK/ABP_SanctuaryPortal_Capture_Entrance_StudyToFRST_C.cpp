#include "ABP_SanctuaryPortal_Capture_Entrance_Base_C.hpp"
#include "ABP_SanctuaryPortal_Capture_Entrance_StudyToFRST_C.hpp"
ABP_SanctuaryPortal_Capture_Entrance_StudyToFRST_C* ABP_SanctuaryPortal_Capture_Entrance_StudyToFRST_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Sanctuary/Blueprints/SanctuaryPortals/BP_SanctuaryPortal_Capture_Entrance_StudyToFRST.BP_SanctuaryPortal_Capture_Entrance_StudyToFRST_C");
    return (ABP_SanctuaryPortal_Capture_Entrance_StudyToFRST_C*)res;
}
