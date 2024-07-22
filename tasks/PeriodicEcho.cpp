/* Generated from orogen/lib/orogen/templates/tasks/Task.cpp */

#include "PeriodicEcho.hpp"

using namespace orogen_syskit_tests;

PeriodicEcho::PeriodicEcho(std::string const& name)
    : PeriodicEchoBase(name)
{
}

PeriodicEcho::~PeriodicEcho()
{
}



/// The following lines are template definitions for the various state machine
// hooks defined by Orocos::RTT. See PeriodicEcho.hpp for more detailed
// documentation about them.

bool PeriodicEcho::configureHook()
{
    if (! PeriodicEchoBase::configureHook())
        return false;
    return true;
}
bool PeriodicEcho::startHook()
{
    if (! PeriodicEchoBase::startHook())
        return false;
    return true;
}
void PeriodicEcho::updateHook()
{
    PeriodicEchoBase::updateHook();

    int value;
    if (_in.read(value) != RTT::NoData) {
        _out.write(value);
    }
}
void PeriodicEcho::errorHook()
{
    PeriodicEchoBase::errorHook();
}
void PeriodicEcho::stopHook()
{
    PeriodicEchoBase::stopHook();
}
void PeriodicEcho::cleanupHook()
{
    PeriodicEchoBase::cleanupHook();
}
