#include "AStation.hpp"
#include "ATransfigurationObjectStationBase.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
ATransfigurationObjectStationBase* ATransfigurationObjectStationBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransfigurationObjectStationBase");
    return (ATransfigurationObjectStationBase*)res;
}
