#include "FVector.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_MovingOverEdge.hpp"
UAblAnimationTagChooser_MovingOverEdge* UAblAnimationTagChooser_MovingOverEdge::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_MovingOverEdge");
    return (UAblAnimationTagChooser_MovingOverEdge*)res;
}
