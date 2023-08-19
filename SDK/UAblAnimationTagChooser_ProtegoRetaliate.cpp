#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_ProtegoRetaliate.hpp"
#include "USpellToolRecord.hpp"
UAblAnimationTagChooser_ProtegoRetaliate* UAblAnimationTagChooser_ProtegoRetaliate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_ProtegoRetaliate");
    return (UAblAnimationTagChooser_ProtegoRetaliate*)res;
}
