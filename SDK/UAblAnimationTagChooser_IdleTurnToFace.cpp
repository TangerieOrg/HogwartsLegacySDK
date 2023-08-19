#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_IdleTurnToFace.hpp"
UAblAnimationTagChooser_IdleTurnToFace* UAblAnimationTagChooser_IdleTurnToFace::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_IdleTurnToFace");
    return (UAblAnimationTagChooser_IdleTurnToFace*)res;
}
