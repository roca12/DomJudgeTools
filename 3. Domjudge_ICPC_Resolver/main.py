from argparse import ArgumentParser

from classes.domjudge import DOMjudge

from utils.argument_parser import argument_parser
from utils.config_loader import config_loader
import subprocess

def main():
    argument = argument_parser()
    config = config_loader(argument['config'])
    DOMjudge(config['url'], config['key']).export_XML(config['xml'])
    subprocess.run("resolver.bat events.xml")

if __name__ == '__main__':
    main()
