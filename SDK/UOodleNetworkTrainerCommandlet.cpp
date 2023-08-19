#include "UCommandlet.hpp"
#include "UOodleNetworkTrainerCommandlet.hpp"
UOodleNetworkTrainerCommandlet* UOodleNetworkTrainerCommandlet::StaticClass() {
    static auto res = find_uobject("Class /Script/OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet");
    return (UOodleNetworkTrainerCommandlet*)res;
}
