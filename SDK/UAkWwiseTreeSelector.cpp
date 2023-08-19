#include "UAkWwiseTreeSelector.hpp"
#include "UWidget.hpp"
UAkWwiseTreeSelector* UAkWwiseTreeSelector::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkWwiseTreeSelector");
    return (UAkWwiseTreeSelector*)res;
}
