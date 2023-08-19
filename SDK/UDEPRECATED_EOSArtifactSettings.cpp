#include "UDEPRECATED_EOSArtifactSettings.hpp"
#include "UDataAsset.hpp"
UDEPRECATED_EOSArtifactSettings* UDEPRECATED_EOSArtifactSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemEOS.EOSArtifactSettings");
    return (UDEPRECATED_EOSArtifactSettings*)res;
}
