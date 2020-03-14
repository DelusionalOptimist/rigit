#include <stdio.h>
#include <stdlib.h>
#include <argp.h>

const char *argp_program_version = "rigit v1.0";
const char *argp_program_bug_address = "<https://github.com/DelusionalOptimist/rigit>";

static char doc[] = "Rigit is a version control system.";

static char args_doc[] = "ARG1 ARG2";

static struct argp_option options[] = {
  //{"add",          'a', 0,      0,  "Add file contents to the index" },
  //{"checkout",     'c', 0,      0,  "Apply changes introduced by sone existing commits" },
  //{"commit",       'C', 0,      0,  "Give an object a human readable name" },
  //{"hash-object",  'h', 0,      0,  "" },
  {"init",         'i', 0,      0,  "Create an empty git repository" },
  //{"log",          'l', 0,      0,  "" },
  //{"merge",        'm', 0,      0,  "" },
  //{"rebase",       'r', 0,      0,  "" },
  //{"rm",           'R', 0,      0,  "" },
  //{"tag",          't', 0,      0,  "" },
  { 0 }
};

struct arguments
{
  char *args[2];
};

static error_t parse_opt (int key, char *arg, struct argp_state *state)
{
  struct arguments *arguments = state->input;

  switch (key)
  {
    case 'i': 
    {
      printf("init does not work yet\n");
      break;
    }
    case ARGP_KEY_ARG:
    {
      if (state->arg_num >= 1)
      {
        argp_usage (state);
      }
      arguments->args[state->arg_num] = arg;
      break;
    }
    default:
    {
      return ARGP_ERR_UNKNOWN;
    }
  }

  return 0;
}

static struct argp argp = { options, parse_opt, args_doc, doc };

int main (int argc, char **argv)
{
  struct arguments arguments;

  argp_parse (&argp, argc, argv, 0, 0, &arguments);

  exit (0);
}