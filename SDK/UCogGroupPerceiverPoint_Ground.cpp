#include "UCogGroupPerceiverPoint.hpp"
#include "UCogGroupPerceiverPoint_Ground.hpp"
UCogGroupPerceiverPoint_Ground* UCogGroupPerceiverPoint_Ground::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupPerceiverPoint_Ground");
    return (UCogGroupPerceiverPoint_Ground*)res;
}
