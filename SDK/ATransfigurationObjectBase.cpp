#include "AInteractiveObjectActor.hpp"
#include "ATransfigurationObjectBase.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
ATransfigurationObjectBase* ATransfigurationObjectBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransfigurationObjectBase");
    return (ATransfigurationObjectBase*)res;
}
