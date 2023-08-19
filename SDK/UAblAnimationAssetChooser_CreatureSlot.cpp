#include "UAblAnimationAssetChooser_CreatureSlot.hpp"
#include "UAmbulatoryAnimationAssetChooser.hpp"
UAblAnimationAssetChooser_CreatureSlot* UAblAnimationAssetChooser_CreatureSlot::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationAssetChooser_CreatureSlot");
    return (UAblAnimationAssetChooser_CreatureSlot*)res;
}
