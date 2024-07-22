/* Generated from orogen/lib/orogen/templates/tasks/Task.cpp */

#include "TriggeredEcho.hpp"

using namespace orogen_syskit_tests;

TriggeredEcho::TriggeredEcho(std::string const& name)
    : TriggeredEchoBase(name)
{
}

TriggeredEcho::~TriggeredEcho()
{
}



/// The following lines are template definitions for the various state machine
// hooks defined by Orocos::RTT. See TriggeredEcho.hpp for more detailed
// documentation about them.

bool TriggeredEcho::configureHook()
{
    if (! TriggeredEchoBase::configureHook())
        return false;
    return true;
}
bool TriggeredEcho::startHook()
{
    if (! TriggeredEchoBase::startHook())
        return false;
    return true;
}
void TriggeredEcho::updateHook()
{
    TriggeredEchoBase::updateHook();

    int value;
    if (_in.read(value) == RTT::NewData) {
        _out.write(value);
    }
}
void TriggeredEcho::errorHook()
{
    TriggeredEchoBase::errorHook();
}
void TriggeredEcho::stopHook()
{
    TriggeredEchoBase::stopHook();
}
void TriggeredEcho::cleanupHook()
{
    TriggeredEchoBase::cleanupHook();
}
