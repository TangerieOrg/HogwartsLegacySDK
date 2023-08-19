#include "UAkAssetBase.hpp"
#include "UAkInitBank.hpp"
UAkInitBank* UAkInitBank::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkInitBank");
    return (UAkInitBank*)res;
}
