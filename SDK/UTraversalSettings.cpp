#include "FTraversalDetectionSettings.hpp"
#include "FTraversalDropDownSettings.hpp"
#include "FTraversalLadderSettings.hpp"
#include "FTraversalMetricsSettings.hpp"
#include "FTraversalSnappingSettings.hpp"
#include "FTraversalSwimDiveSettings.hpp"
#include "UDataAsset.hpp"
#include "UTraversalSettings.hpp"
UTraversalSettings* UTraversalSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.TraversalSettings");
    return (UTraversalSettings*)res;
}
