#include "FCinematicId.hpp"
#include "FCinematicRenderJob.hpp"
#include "UCinematicBatch.hpp"
#include "UDataAsset.hpp"
UCinematicBatch* UCinematicBatch::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CinematicBatch");
    return (UCinematicBatch*)res;
}
