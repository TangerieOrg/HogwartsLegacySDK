#include "UCogGroupPerceiverPoint.hpp"
#include "UCogGroupPerceiverPoint_Camera.hpp"
UCogGroupPerceiverPoint_Camera* UCogGroupPerceiverPoint_Camera::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupPerceiverPoint_Camera");
    return (UCogGroupPerceiverPoint_Camera*)res;
}
