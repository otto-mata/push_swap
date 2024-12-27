import random
import subprocess
import numpy as np

PROC_N = 500
SIZE_ARGS = 500

def gen_input(n: int, low: int = None, high: int = None) -> list[str]:
	low = 0 if low is None else low
	high = 2000 if high is None else high
	try:
		sample = random.sample(range(low, high), n)
	except ValueError:
		print(f"ERROR: Sample size exceeds population size ({low}, {high}, pop: {n})")
		return [""]
	return list(map(lambda i: str(i), sample))

def push_swap_proc(args: str):
	cmd = ["./push_swap"]
	cmd.extend(args)
	return subprocess.check_output(cmd)

def main():
	out_count = [None] * PROC_N
	outputs: list[str] = [None] * PROC_N

	for i in range(PROC_N):
		outputs[i] = push_swap_proc(gen_input(SIZE_ARGS))
		out_count[i] = len(outputs[i].splitlines())

print(" ".join(gen_input(SIZE_ARGS)))