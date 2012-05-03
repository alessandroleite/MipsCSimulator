#ifndef __MIPS_H__
#define __MIPS_H__


class Mips
{
    public:
        Mips();

        void fetch();

        void decode();

		void execute();

    protected:
	
		/**	
	 	 * Imprime o conteúdo do banco de registradores, mais os registradores especiais: PC, IR, HI, LO, etc.
	 	 */	
		void dump_regs();
		
		void dump_memory(int start, int end, char format);
		
		void step();
		
		void run();
};
#endif
