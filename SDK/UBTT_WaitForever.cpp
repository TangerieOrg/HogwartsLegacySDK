#include "UBTT_WaitForever.hpp"
#include "UBTTaskNode.hpp"
UBTT_WaitForever* UBTT_WaitForever::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTT_WaitForever");
    return (UBTT_WaitForever*)res;
}
