#ifndef __ASM_UNISTD_32_H__
# define __ASM_UNISTD_32_H__

// ABI redirection
#if defined(__SUPPORT_VHEX_KERNEL)
# include <arch/vhex/unistd_32.h>
#elif defined(__SUPPORT_CASIO_ABI_FX9860G)
# include <arch/fx9860g/unistd_32.h>
#elif defined(__SUPPORT_CASIO_ABI_FXCG50)
# include <arch/fxcg50/unistd_32.h>
#endif

#endif /*__ASM_UNISTD_32_H__*/
