/* Generated from orogen/lib/orogen/templates/tasks/Task.cpp */

#include "Empty.hpp"

using namespace orogen_syskit_tests;

Empty::Empty(std::string const& name)
    : EmptyBase(name)
{
}

Empty::~Empty()
{
}



/// The following lines are template definitions for the various state machine
// hooks defined by Orocos::RTT. See Empty.hpp for more detailed
// documentation about them.

bool Empty::configureHook()
{
    if (! EmptyBase::configureHook())
        return false;
    return true;
}
bool Empty::startHook()
{
    if (! EmptyBase::startHook())
        return false;
    return true;
}
void Empty::updateHook()
{
    EmptyBase::updateHook();
}
void Empty::errorHook()
{
    EmptyBase::errorHook();
}
void Empty::stopHook()
{
    EmptyBase::stopHook();
}
void Empty::cleanupHook()
{
    EmptyBase::cleanupHook();
}
