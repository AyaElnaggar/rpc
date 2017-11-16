struct operands{
	int x;
};


program SIMP_PROG{
	version SIMP_VERSION{
		int factorial(operands) = 1;
	} = 1;
} = 0x30D0D0FF;
