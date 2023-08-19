#include "UBTT_MoveToWithRadius.hpp"
#include "UBTTask_MoveTo.hpp"
UBTT_MoveToWithRadius* UBTT_MoveToWithRadius::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTT_MoveToWithRadius");
    return (UBTT_MoveToWithRadius*)res;
}
