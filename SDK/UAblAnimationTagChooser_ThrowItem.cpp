#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_ThrowItem.hpp"
UAblAnimationTagChooser_ThrowItem* UAblAnimationTagChooser_ThrowItem::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_ThrowItem");
    return (UAblAnimationTagChooser_ThrowItem*)res;
}
