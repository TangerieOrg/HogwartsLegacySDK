#include "UCogGroupPerceiverPoint.hpp"
#include "UObject.hpp"
UCogGroupPerceiverPoint* UCogGroupPerceiverPoint::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupPerceiverPoint");
    return (UCogGroupPerceiverPoint*)res;
}
