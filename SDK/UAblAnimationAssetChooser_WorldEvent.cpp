#include "UAblAnimationAssetChooser_WorldEvent.hpp"
#include "UAmbulatoryAnimationAssetChooser.hpp"
UAblAnimationAssetChooser_WorldEvent* UAblAnimationAssetChooser_WorldEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationAssetChooser_WorldEvent");
    return (UAblAnimationAssetChooser_WorldEvent*)res;
}
