#include "UARTrackedImage.hpp"
#include "UARTrackedQRCode.hpp"
UARTrackedQRCode* UARTrackedQRCode::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARTrackedQRCode");
    return (UARTrackedQRCode*)res;
}
