#include "ATransfigurationObjectBase.hpp"
#include "ATransfigurationStructureBase.hpp"
ATransfigurationStructureBase* ATransfigurationStructureBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransfigurationStructureBase");
    return (ATransfigurationStructureBase*)res;
}
