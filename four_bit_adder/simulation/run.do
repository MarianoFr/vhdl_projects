quietly set ACTELLIBNAME ProASIC3
quietly set PROJECT_DIR "C:/MarianoF/vhdl_projects/four_bit_adder"

if {[file exists presynth/_info]} {
   echo "INFO: Simulation library presynth already exists"
} else {
   file delete -force presynth 
   vlib presynth
}
vmap presynth presynth
vmap proasic3 "C:/Microsemi/Libero_SoC_v11.9/Designer/lib/modelsim/precompiled/vhdl/proasic3"

vcom -2008 -explicit  -work presynth "${PROJECT_DIR}/hdl/four_bit_adder.vhd"
vcom -2008 -explicit  -work presynth "${PROJECT_DIR}/stimulus/four_bit_adder_tb.vhd"

vsim -L proasic3 -L presynth  -t 1ps presynth.four_bit_adder_tb
add wave /four_bit_adder_tb/*
run 1000ns
