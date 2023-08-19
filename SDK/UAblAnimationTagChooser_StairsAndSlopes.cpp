#include "EStairsDirectionState\Type.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_StairsAndSlopes.hpp"
UAblAnimationTagChooser_StairsAndSlopes* UAblAnimationTagChooser_StairsAndSlopes::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_StairsAndSlopes");
    return (UAblAnimationTagChooser_StairsAndSlopes*)res;
}
