#include "FVector.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_AimModeTurnToFace.hpp"
UAblAnimationTagChooser_AimModeTurnToFace* UAblAnimationTagChooser_AimModeTurnToFace::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_AimModeTurnToFace");
    return (UAblAnimationTagChooser_AimModeTurnToFace*)res;
}
