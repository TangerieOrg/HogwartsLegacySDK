#include "UBTT_Camera_Base.hpp"
#include "UBTT_Camera_NotifyBlendComplete.hpp"
UBTT_Camera_NotifyBlendComplete* UBTT_Camera_NotifyBlendComplete::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTT_Camera_NotifyBlendComplete");
    return (UBTT_Camera_NotifyBlendComplete*)res;
}
