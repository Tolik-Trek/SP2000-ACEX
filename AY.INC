-- Interface extracted from actual author TDF.
FUNCTION ay (/RESET, CLK42, AY_T[8..0], AY_D_WR, AY_A_WR, D[7..0], BEEPER)
    RETURNS (DO[7..0], AY_CH_A[3..0], AY_CH_B[3..0], AY_CH_C[3..0], AY_CH_L[9..0], AY_CH_R[9..0], AY_CH_VAL);
