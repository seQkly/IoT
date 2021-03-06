# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\cps\Documents\neoapi\Project Templates\Sensor Examples\Example Sensors\DecagonGS3.cydsn\DecagonGS3.cyprj
# Date: Thu, 25 Feb 2016 03:49:21 GMT
#set_units -time ns
create_clock -name {CyILO} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 333.33333333333331 -waveform {0 166.666666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_generated_clock -name {UART_Decagon_IntClock} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2501 5001} -nominal_period 104166.66666666666 [list [get_pins {ClockBlock/dclk_glb_0}]]


# Component constraints for C:\Users\cps\Documents\neoapi\Project Templates\Sensor Examples\Example Sensors\DecagonGS3.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\cps\Documents\neoapi\Project Templates\Sensor Examples\Example Sensors\DecagonGS3.cydsn\DecagonGS3.cyprj
# Date: Thu, 25 Feb 2016 03:49:17 GMT
