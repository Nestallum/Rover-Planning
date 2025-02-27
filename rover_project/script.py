import pygame
import time

# Paramètres de la fenêtre
WIDTH, HEIGHT = 500, 500
GRID_SIZE = 100
BACKGROUND_COLOR = (30, 30, 30)
ROVER_COLOR = (255, 255, 0)
SAMPLE_COLOR = (0, 100, 0)
HEAVY_SAMPLE_COLOR = (34, 139, 34)
BASE_COLOR = (255, 0, 0)
CHARGING_COLOR = (0, 0, 255)
CRATER_COLOR = (128, 0, 128)
TEXT_COLOR = (200, 200, 200)

# Chargement des instructions à partir du fichier
instructions = []
with open("rover_project/plan.txt", "r") as file:
    for line in file:
        line = line.strip()
        if line:
            step, action = line.split(": ")
            instructions.append((step.strip(), action.strip()))

# Position initiale et objets sur la carte
grid_map = {
    "rover1": (2, 2),
    "base1": (4, 4),
    "samples": {"sample1": (4, 1), "sample2": (3, 0), "sample3": (0, 2)},
    "charging_stations": [(4, 0), (2, 4)],
    "craters": [(1, 3), (3, 1)],
}

def parse_location(label):
    return int(label[1]), int(label[2])

# Initialisation de Pygame
pygame.init()
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Rover Simulation")
font = pygame.font.Font(None, 24)

def draw_grid():
    for x in range(0, WIDTH, GRID_SIZE):
        pygame.draw.line(screen, (50, 50, 50), (x, 0), (x, HEIGHT))
    for y in range(0, HEIGHT, GRID_SIZE):
        pygame.draw.line(screen, (50, 50, 50), (0, y), (WIDTH, y))

def draw_base():
    x, y = grid_map["base1"][0] * GRID_SIZE, grid_map["base1"][1] * GRID_SIZE
    pygame.draw.rect(screen, BASE_COLOR, (x + 5, y + 5, GRID_SIZE - 10, GRID_SIZE - 10))

def draw_samples():
    for sample, pos in grid_map["samples"].items():
        x, y = pos[0] * GRID_SIZE, pos[1] * GRID_SIZE
        color = HEAVY_SAMPLE_COLOR if sample == "sample2" else SAMPLE_COLOR
        pygame.draw.polygon(screen, color, [(x + GRID_SIZE // 2, y + 10), (x + 10, y + GRID_SIZE - 10), (x + GRID_SIZE - 10, y + GRID_SIZE - 10)])

def draw_charging_stations():
    for pos in grid_map["charging_stations"]:
        x, y = pos[0] * GRID_SIZE, pos[1] * GRID_SIZE
        pygame.draw.rect(screen, CHARGING_COLOR, (x + 10, y + 10, GRID_SIZE - 20, GRID_SIZE - 20))

def draw_craters():
    for pos in grid_map["craters"]:
        x, y = pos[0] * GRID_SIZE, pos[1] * GRID_SIZE
        pygame.draw.rect(screen, CRATER_COLOR, (x + 10, y + 10, GRID_SIZE - 20, GRID_SIZE - 20))

def draw_rover(position):
    x, y = position[0] * GRID_SIZE, position[1] * GRID_SIZE
    pygame.draw.circle(screen, ROVER_COLOR, (x + GRID_SIZE // 2, y + GRID_SIZE // 2), GRID_SIZE // 3)

def display_text(step, action):
    text_surface = font.render(f"{step}: {action}", True, TEXT_COLOR)
    screen.blit(text_surface, (10, HEIGHT - 30))

def main():
    global grid_map
    running = True
    step_index = 0
    rover_pos = grid_map["rover1"]
    
    while running and step_index < len(instructions):
        screen.fill(BACKGROUND_COLOR)
        draw_grid()
        draw_base()
        draw_samples()
        draw_charging_stations()
        draw_craters()
        draw_rover(rover_pos)
        step, action = instructions[step_index]
        display_text(step, action)
        
        parts = action.split("(")[0]
        if "move" in parts:
            _, start, end = action.split("(")[1].strip(")").split(",")
            rover_pos = parse_location(end)
        elif "collect" in parts:
            _, sample, location = action.split("(")[1].strip(")").split(",")
            if sample in grid_map["samples"]:
                del grid_map["samples"][sample]  # Enlever l'échantillon collecté
        
        pygame.display.flip()
        time.sleep(1)
        step_index += 1
        
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                running = False

    pygame.quit()

if __name__ == "__main__":
    main()
